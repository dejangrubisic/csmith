#!/bin/bash

BENCH_DIR=$1
BENCH_SIZE=$2
BENCH_LOOP_EXTEND=$3
BENCH_ARG=${@:4}

# echo $BENCH_DIR
# echo $BENCH_SIZE
# echo $BENCH_ARG


mkdir -p benchmarks/source && cd benchmarks/source
rm -rf $BENCH_DIR
mkdir -p $BENCH_DIR && cd $BENCH_DIR


for i in $(seq 1 $BENCH_SIZE); do
    echo $i
    csmith $BENCH_ARG > e_$i.c
    python $ROOT_DIR/loop_controler.py $BENCH_LOOP_EXTEND e_$i.c
    python $ROOT_DIR/main_cleaner.py e_$i.c
done