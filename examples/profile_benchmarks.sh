#!/bin/bash

EXE_DIR=$PWD/benchmarks/exe
PROFILE_DIR=$PWD/benchmarks/profile

for benchmark in $EXE_DIR/*; do
    benchmark_name="${benchmark##*/}"    
    mkdir -p $PROFILE_DIR/$benchmark_name

    for example in $benchmark/*; do
        exe_name="${example##*/}"  
        csv_name=${exe_name%".exe"}.profile.csv  

        # perf stat -o $PROFILE_DIR/$benchmark_name/$csv_name "-x" "," -r 5 -d -d -d $example
        python $ROOT_DIR/profile_benchmark.py $PROFILE_DIR/$benchmark_name/$csv_name $example
    done

done


