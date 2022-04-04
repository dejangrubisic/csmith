#!/bin/bash
BENCH_DIR=$1


BENCH_DIR_FLATTEN=$BENCH_DIR\_flatten
echo $BENCH_DIR_FLATTEN
mkdir -p $BENCH_DIR_FLATTEN
find $BENCH_DIR -name "*.c" -print0 | while read -d $'\0' file_path
do
    file_path_rel=${file_path#"$BENCH_DIR/"}
    file_path_rel_flat=${file_path_rel//[\/]/_}
    echo $BENCH_DIR\_flatten/$file_path_rel_flat
    cp $file_path $BENCH_DIR\_flatten/$file_path_rel_flat
done