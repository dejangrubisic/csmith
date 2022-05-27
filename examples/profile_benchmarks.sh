#!/bin/bash

EXE_DIR=$PWD/benchmarks/exe
PROFILE_DIR=$PWD/benchmarks/profile
FILE_IN=benchmarks/in.txt




for benchmark in $EXE_DIR/*; do
    benchmark_name="${benchmark##*/}"    
    mkdir -p $PROFILE_DIR/$benchmark_name

    for example in $benchmark/*; do
        exe_name="${example##*/}"  
        csv_name=${exe_name%".exe"}.profile.csv  

        # timeout 5 $example < $FILE_IN > /dev/null
        # status=$?
        # echo $status
        # if [[ $status -ne 0 ]]; then
        #     echo "Status: $status, Bad command: $example"
        #     continue
        # fi
        # echo "Status: $status, Good command: $example"

        # perf stat -o $PROFILE_DIR/$benchmark_name/$csv_name "-x" "," -r 5 -d -d -d $example        
        timeout 5 python $ROOT_DIR/profile_benchmark.py $PROFILE_DIR/$benchmark_name/$csv_name "$example < $FILE_IN" > /dev/null
    done

done