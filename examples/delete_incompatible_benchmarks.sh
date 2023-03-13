#!/bin/bash

BENCHMARK_PATH=$1
BENCHMARK_HEADER_PATH=$1/../

if [[ -z "${SOURCE_DIR_CLEANED}" ]]; then
    echo Clean SOURCE_DIR     
    export SOURCE_DIR_CLEANED=1    
else
    echo SOURCE_DIR already cleaned
    return
fi


SOURCE_DIR=$PWD/benchmarks/source
FILE_IN=$PWD/benchmarks_archive/poj104_benchmarks/in.txt

if test -f "$FILE_IN"; then
    FILE_IN="< "$FILE_IN
else
    FILE_IN=""
fi


delete_incompatible_example(){
    example=$1
    exe=$2
    echo $example

    clang -o $exe -O0 -Wno-everything $example -I $BENCHMARK_HEADER_PATH 2> /dev/null

    if [[ $? -ne '0' ]]; then
        echo Doesnt compile: $example
        rm $example
        return
    fi

    # cmd="timeout 10 a.out $FILE_IN 1> /dev/null"
    cmd="timeout 10 $exe 1> /dev/null"
    eval $cmd

    status=$?
    if [[ $status -ne 0 ]]; then
        echo "Doesnt run. Status: $status, Bad command: $example"
        rm $example
        return
    fi

    echo "All good"
}

delete_incompatible_examples(){
    parallel=30

    benchmark=$1
    echo $benchmark
    benchmark_name="${benchmark##*/}"    

    i=0
    for example in $benchmark/*; do        
        delete_incompatible_example $example a$i.out &
        pids[${i}]=$!
        i=$((i+1))

        if [ $(($i % $parallel)) -eq 0 ];then
            # wait for all pids
            for pid in ${pids[*]}; do
                wait $pid
            done
            i=0
        fi
    done

    for ((i=0;i<$parallel;i++)); do
        rm a$i.out
    done
}


if [[ -z "${BENCHMARK_PATH}" ]]; then
    for benchmark in $SOURCE_DIR/*; do
        delete_incompatible_examples $benchmark
    done
else
    delete_incompatible_examples $BENCHMARK_PATH
fi

