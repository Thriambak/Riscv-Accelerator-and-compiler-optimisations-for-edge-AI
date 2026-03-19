#!/bin/bash
# ============================================================================
# AVA Universal Benchmark Runner
# ============================================================================
# Runs all AVA test programs and generates formatted results tables.
# Each test is run in a separate Verilator invocation to avoid state
# carry-over between tests (the accelerator doesn't fully reset between
# sequential programs in a single progs.csv).
#
# Usage:
#   ./run_all_benchmarks.sh              # Run all test_*.S benchmarks
#   ./run_all_benchmarks.sh test_relu.S  # Run specific test(s)
# ============================================================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Determine which programs to run
if [ $# -gt 0 ]; then
    PROGS="$@"
else
    PROGS=$(ls test_*.S 2>/dev/null | tr '\n' ' ')
fi

if [ -z "$PROGS" ]; then
    echo "ERROR: No test_*.S files found"
    exit 1
fi

echo ""
echo "╔══════════════════════════════════════════════════════════════════════╗"
echo "║                    AVA Benchmark Suite Runner                       ║"
echo "╚══════════════════════════════════════════════════════════════════════╝"
echo ""
echo "Tests: $PROGS"
echo ""

# Clean previous builds
echo ">>> Cleaning previous builds..."
make clean 2>/dev/null || true
echo ""

# Temporary file to accumulate results
RESULTS_FILE=$(mktemp)
SPEEDUP_FILE=$(mktemp)
trap "rm -f $RESULTS_FILE $SPEEDUP_FILE" EXIT

# Run each test individually
for prog in $PROGS; do
    NAME="${prog%.S}"
    echo ">>> Running $NAME ..."

    # Build and simulate this single test
    OUTPUT=$(make verilator PROGS="$prog" 2>&1) || {
        echo "    ERROR: Build/sim failed for $prog"
        continue
    }

    # Extract perf info from verilator_main output
    ELAPSED=$(echo "$OUTPUT" | grep -oP 'Elapsed:\s+\K\d+' | head -1)
    PSTART=$(echo "$OUTPUT" | grep -oP 'Perf Start:\s+\K\d+' | head -1)
    PEND=$(echo "$OUTPUT" | grep -oP 'Perf End:\s+\K\d+' | head -1)

    echo "    Perf Start: ${PSTART:-?}  Perf End: ${PEND:-?}  Elapsed: ${ELAPSED:-?} cycles"
    echo "$NAME $ELAPSED" >> "$RESULTS_FILE"

    # Read dump.vmem for scalar/vector cycle comparison
    DUMP="${NAME}.dump.vmem"
    if [ -f "$DUMP" ]; then
        WORD_COUNT=$(wc -l < "$DUMP")
        if [ "$WORD_COUNT" -ge 4 ]; then
            SCALAR_HEX=$(sed -n '3p' "$DUMP")
            VECTOR_HEX=$(sed -n '4p' "$DUMP")
            if [ -n "$SCALAR_HEX" ] && [ -n "$VECTOR_HEX" ]; then
                SCALAR_DEC=$((16#$SCALAR_HEX))
                VECTOR_DEC=$((16#$VECTOR_HEX))
                if [ "$SCALAR_DEC" -gt 0 ] && [ "$VECTOR_DEC" -gt 0 ]; then
                    SPEEDUP=$(echo "scale=1; $SCALAR_DEC / $VECTOR_DEC" | bc 2>/dev/null || echo "N/A")
                    echo "$NAME $SCALAR_DEC $VECTOR_DEC $SPEEDUP" >> "$SPEEDUP_FILE"
                fi
            fi
        fi
    fi

    # Clean build artifacts for next test (but keep dump files)
    rm -f *.vmem *.elf *.o progs.csv 2>/dev/null || true
    # Restore dump file for reporting
    if [ -f "$DUMP.bak" ]; then mv "$DUMP.bak" "$DUMP"; fi

    echo ""
done

# Print results tables
echo ""
echo "╔══════════════════════════════════════════════════════════════════════╗"
echo "║                        Results Summary                              ║"
echo "╚══════════════════════════════════════════════════════════════════════╝"
echo ""
echo "| Benchmark | Elapsed Cycles |"
echo "|-----------|---------------|"

while read -r name cycles; do
    printf "| %-24s | %14s |\n" "$name" "$cycles"
done < "$RESULTS_FILE"

echo ""

# Print speedup comparison if any tests have it
if [ -s "$SPEEDUP_FILE" ]; then
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════════╗"
    echo "║                    Scalar vs Vector Comparison                      ║"
    echo "╚══════════════════════════════════════════════════════════════════════╝"
    echo ""
    echo "| Kernel | Scalar Cycles | Vector Cycles | Speedup |"
    echo "|--------|--------------|--------------|---------|"

    while read -r name scalar vector speedup; do
        printf "| %-24s | %13s | %13s | %6sx |\n" "$name" "$scalar" "$vector" "$speedup"
    done < "$SPEEDUP_FILE"

    echo ""
fi

echo "Done! Results above can be pasted into your paper."
echo ""
