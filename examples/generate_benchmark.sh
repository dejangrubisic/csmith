#!/bin/bash

BENCH_DIR=$1
BENCH_SIZE=$2
BENCH_ARG=${@:3}

# echo $BENCH_DIR
# echo $BENCH_SIZE
# echo $BENCH_ARG

rm -rf $BENCH_DIR
mkdir $BENCH_DIR && cd $BENCH_DIR


for i in $(seq 1 $BENCH_SIZE); do
    echo $i
    csmith $BENCH_ARG > e_$i.c
done