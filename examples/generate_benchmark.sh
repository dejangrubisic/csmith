#!/bin/bash

BENCH_DIR=$1
BENCH_SIZE=$2
BENCH_MAIN_REPEAT=$3
BENCH_LOOP_REPEAT=$4
BENCH_ARG=${@:5}

# echo $BENCH_DIR
# echo $BENCH_SIZE
# echo $BENCH_ARG


mkdir -p benchmarks/source && cd benchmarks/source
rm -rf $BENCH_DIR
mkdir -p $BENCH_DIR && cd $BENCH_DIR

echo $BENCH_DIR
echo csmith $BENCH_ARG

for i in $(seq 1 $BENCH_SIZE); do
    csmith $BENCH_ARG > e_$i.c
    if (($BENCH_LOOP_REPEAT > 1)); then
        python $ROOT_DIR/loop_controler.py $BENCH_LOOP_REPEAT e_$i.c
    fi
    python $ROOT_DIR/main_controler.py $BENCH_MAIN_REPEAT e_$i.c
done