#!/bin/bash

SOURCE_DIR=$PWD/benchmarks/source
EXE_DIR=$PWD/benchmarks/exe


for benchmark in $SOURCE_DIR/*; do
    echo $benchmark
    benchmark_name="${benchmark##*/}"    
    mkdir -p $EXE_DIR/$benchmark_name

    for example in $benchmark/*; do
        source_name="${example##*/}"
        exe_name=${source_name%".c"}.exe
        
        clang -Wno-everything -o $EXE_DIR/$benchmark_name/$exe_name $example
    done

done


