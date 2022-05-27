#!/bin/bash

BENCHMARK_PATH=$1
SOURCE_DIR=$PWD/benchmarks/source


renumber_examples(){
    benchmark=$1
    echo $benchmark
    benchmark_name="${benchmark##*/}"    
    i=1
    for example in $(ls -lfv $benchmark/*); do        
        if [[ $i -eq 221 ]]; then
            break
        fi


        dir_path="$(dirname "${example}")"
        
        echo $example to $dir_path/e_$i.c 
        mv $example $dir_path/e_$i.c

        i=$((i+1))        
    done

    echo $example to $dir_path/e_$i.c 
}


if [[ -z "${BENCHMARK_PATH}" ]]; then
    for benchmark in $SOURCE_DIR/*; do
        renumber_examples $benchmark
    done
else
    renumber_examples $BENCHMARK_PATH
fi
