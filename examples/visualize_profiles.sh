#!/bin/bash

PROFILE_DIR=$PWD/benchmarks/profile
VISUALIZATION_DIR=$PWD/benchmarks/visualization

for benchmark in $PROFILE_DIR/*; do
    benchmark_name="${benchmark##*/}"    
    mkdir -p $VISUALIZATION_DIR    
    python $ROOT_DIR/visualize_profile.py $PROFILE_DIR/$benchmark_name $VISUALIZATION_DIR
done


