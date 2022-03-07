#!/bin/bash

SOURCE_DIR=$PWD/benchmarks/source


for benchmark in $SOURCE_DIR/*; do
    echo $benchmark
    benchmark_name="${benchmark##*/}"    

    for example in $benchmark/*; do        
        clang -O0 -Wno-everything $example 2> /dev/null

        if [[ $? -ne '0' ]]; then
            echo Doesnt compile: $example
            rm $example
        fi
    done

done


