## Documentation for CSmith Code generation

benchmarks
- source: code of generated benchmarks
- compile: executable of benchmarks
- profile: csv files of perf
- visualize: plots of perf csv files

change_extension.py
- Format: change_extension.py path_to_dir old_suffix new_suffix
- Changes extention from one suffix to another

compile_benchmarks.sh
- Format: compile_benchmarks.sh optimization_flags
- compile examples from benchmarks/source/ to executable and puts them to benchmarks/compile directory

csmith_interesting_flags.txt
- Format: 
- Interesting flags for generating code with CSmith

delete_incompatible_benchmarks.sh
- Format: delete_incompatible_benchmarks.sh path_to_benchmark=benchmarks/source
- compiles and run all examples from 

flat_benchmark_structure.sh
- Format: flat_benchmark_structure.sh path_to_benchmark
- Locates all examples from benchmark_path recursively and puts them in [benchmark]_flatten directory


generate_benchmark.sh
- Format: ./generate_benchmark.sh BENCH_DIR BENCH_SIZE BENCH_MAIN_REPEAT BENCH_LOOP_REPEAT BENCH_ARGS
- Creates  BENCH_DIR, generates BENCH_SIZE examples with CSmith given BENCH_ARGS insert for loop on main and on each loop (if you want to make it longer)

gen_input.py
- Format: gen_input.py file_path [ num ]
- Generate file with num numbers separated with '\n' needed for poj104 examples

gen_input.sh
- Format: ./gen_input.sh
- Generates input file or each example

loop_controler.py
- Format: loop_controler.py loop_factor file1 [ file2 ... ]
- Inserts for loop in front of every for loops with unique iterator

main_controler.py
- Format: main_controler.py repeat_main file1 [ file2 ... ]
- Inserts for loop in front of main 


Makefile
make all 
- creates all specified number of benchmarks with defined parameters (from each benchmark)
- compiles and runs them checking for error, if errorcode is not 0 remove them
- create executable for each file
- create input if necessary
- run perf on each example in csv file
- visualize csv files

running make all again will generate files on top of previous ones starting with the largest e_X.c number

make [benchmark]
- generate only 1 benchmark kind

make delete_incompatible_benchmarks
- runs through all benchmark examples and deletes them if they have errors

make compile
- compiles all examples

make gen_input
- generates input for benchmark (make sense only for poj104)

make profile
- create perf csv files

make visualize
- visualize csv files to histograms and violin plots


merge_pictures.py
- Format: merge_pictures.py [vertical|box] pictures_dir suffix out_file_path
- Merges pictures vertically or in matrix fashion

perf_events.txt
- Format:
- Measureable perf events list

profile_benchmark.py
- Format: profile_benchmark.py csv_path "exe_path+args" 
- Runs executable with arguments and profiles it with perf and save it to csv_path

profile_benchmarks.sh
- Format: ./profile_benchmarks.sh
- Profiles all examples from benchmarks/source and puts them to benchmarks/profile

renumber_benchmarks.sh
- Format: ./renumber_benchmarks.sh path_to_benchmark=benchmarks/source
- Rename all examples from benchmark to e_X.c form where X are consecutive 1, 2.. 

split_data.py
- Format: split_data.py path_to_data path_to_test test_size
- Moves files from path_to_data to path_to_test given test_size (positive num). Expects example in format groupid_exampleid.c 

visualize_profile.py
- Format: visualize_profile.py profile_dir visualization_dir
- Takes all csv files from profile directory and plot them together. Creates Local and Global plots.

visualize_profiles.sh
- Format: ./visualize_profiles.sh
- Visualize all profiles from benchmarks/proifle directory






