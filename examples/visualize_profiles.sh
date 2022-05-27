#!/bin/bash

PROFILE_DIR=$PWD/benchmarks/profile
VISUALIZATION_DIR=$PWD/benchmarks/visualization

# for benchmark in $PROFILE_DIR/*; do
#     benchmark_name="${benchmark##*/}"    
#     mkdir -p $VISUALIZATION_DIR    
#     python $ROOT_DIR/visualize_profile.py $PROFILE_DIR/$benchmark_name $VISUALIZATION_DIR
# done

mkdir -p $VISUALIZATION_DIR/local
mkdir -p $VISUALIZATION_DIR/global   
python $ROOT_DIR/visualize_profile.py $PROFILE_DIR/$benchmark_name $VISUALIZATION_DIR


# python $ROOT_DIR/merge_pictures.py vertical $VISUALIZATION_DIR violin.png $VISUALIZATION_DIR/../violin_combined.png
# python $ROOT_DIR/merge_pictures.py vertical $VISUALIZATION_DIR histogram.png $VISUALIZATION_DIR/../histogram_combined.png

