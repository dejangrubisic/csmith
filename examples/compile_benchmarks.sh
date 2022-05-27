#!/bin/bash

OPT_FLAG=$1

SOURCE_DIR=$PWD/benchmarks/source
EXE_DIR=$PWD/benchmarks/exe


for benchmark in $SOURCE_DIR/*; do
    echo $benchmark
    benchmark_name="${benchmark##*/}"    
    mkdir -p $EXE_DIR/$benchmark_name

    for example in $benchmark/*; do
        source_name="${example##*/}"
        exe_name=${source_name%".c"}.exe
        
        # clang $OPT_FLAG -Wno-everything -o $EXE_DIR/$benchmark_name/$exe_name $example 2> /dev/null

        clang -Wno-everything -o tmp.ll -S -emit-llvm $example
        if [[ $? -ne '0' ]]; then
            echo Doesnt compile \(clang ll\): $example       
            continue     
        fi

        opt $OPT_FLAG -o tmp.bc tmp.ll
        if [[ $? -ne '0' ]]; then
            echo Doesnt compile \(opt\): $example    
            continue        
        fi
        
        clang tmp.bc -o $EXE_DIR/$benchmark_name/$exe_name
        if [[ $? -ne '0' ]]; then
            echo Doesnt compile \(clang exe\): $example    
            continue        
        fi

    done

    rm tmp.ll
done


