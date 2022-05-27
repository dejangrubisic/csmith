#!/bin/bash

BENCH_DIR=$1
BENCH_SIZE=$2
BENCH_MAIN_REPEAT=$3
BENCH_LOOP_REPEAT=$4
BENCH_ARG=${@:5}

# echo $BENCH_DIR
# echo $BENCH_SIZE
# echo $BENCH_ARG


delete_incompatible_example(){
    example=$1
    clang -O0 -Wno-everything $example 2> /dev/null

        if [[ $? -ne '0' ]]; then
            echo Doesnt compile: $example
            rm $example
            continue
            good_example=false
        fi

        timeout 5 a.out $FILE_IN 1> /dev/null
        status=$?
        if [[ $status -ne 0 ]]; then
            echo "Doesnt run. Status: $status, Bad command: $example"
            rm $example
            good_example=false
        fi

        echo "All good"
        good_example=true
        rm a.out

}



mkdir -p benchmarks/source && cd benchmarks/source
mkdir -p $BENCH_DIR && cd $BENCH_DIR

echo $BENCH_DIR
echo csmith $BENCH_ARG

# Find the last example_id
LAST_ID=0
for example in $(ls -lfv); do
    LAST_ID=${example#"e_"}
    LAST_ID=${LAST_ID%".c"}    
done
LAST_ID=$((LAST_ID+1))        

echo "Last id = " $LAST_ID


for i in $(seq $LAST_ID $BENCH_SIZE); do
    example_name=e_$i.c

    while true; do
        csmith $BENCH_ARG > $example_name
        if (($BENCH_LOOP_REPEAT > 1)); then
            python $ROOT_DIR/loop_controler.py $BENCH_LOOP_REPEAT $example_name
        fi
        python $ROOT_DIR/main_controler.py $BENCH_MAIN_REPEAT $example_name

        delete_incompatible_example ./$example_name
        if [[ $good_example -eq true ]]; then 
            break
        fi
    done

done