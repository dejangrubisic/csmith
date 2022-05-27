#!/bin/bash

BENCHMARK_PATH=$1


if [[ -z "${SOURCE_DIR_CLEANED}" ]]; then
    echo Clean SOURCE_DIR     
    export SOURCE_DIR_CLEANED=1    
else
    echo SOURCE_DIR already cleaned
    return
fi


SOURCE_DIR=$PWD/benchmarks/source
FILE_IN=$PWD/benchmarks/in.txt

if test -f "$FILE_IN"; then
    FILE_IN="< "$FILE_IN
else
    FILE_IN=""
fi


delete_incompatible_example(){
    example=$1
    clang -O0 -Wno-everything $example 2> /dev/null

        if [[ $? -ne '0' ]]; then
            echo Doesnt compile: $example
            rm $example
            continue
        fi

        timeout 5 a.out $FILE_IN 1> /dev/null
        status=$?
        if [[ $status -ne 0 ]]; then
            echo "Doesnt run. Status: $status, Bad command: $example"
            rm $example
            continue
        fi

        echo "All good"
}

delete_incompatible_examples(){
    benchmark=$1
    echo $benchmark
    benchmark_name="${benchmark##*/}"    

    for example in $benchmark/*; do        
        delete_incompatible_example $example
    done
}



if [[ -z "${BENCHMARK_PATH}" ]]; then
    for benchmark in $SOURCE_DIR/*; do
        delete_incompatible_examples $benchmark
    done
else
    delete_incompatible_examples $BENCHMARK_PATH
fi

