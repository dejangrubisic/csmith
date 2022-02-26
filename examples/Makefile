# Global Benchmark parameters
BENCH_SIZE := 100
BENCH_LOOP_REPEAT := -1
BENCH_MAIN_REPEAT := 10

BLOCK_DEPTH_HIGH := 5 # (default 5)
BLOCK_DEPTH_LOW := 2

BLOCK_LENGTH_HIGH := 8 # (default 4)
BLOCK_LENGTH_LOW := 2

ARRAY_DEPTH_HIGH := 3 # (default 3)
ARRAY_DEPTH_LOW := 1

ARRAY_LENGTH_HIGH := 100 # (default 10)
ARRAY_LENGTH_LOW := 10

POINTER_DEPTH_HIGH := 4 # (default 2)
POINTER_DEPTH_LOW := 1

EXP_COMPLEXITY_HIGH := 12 # (default 10)
EXP_COMPLEXITY_LOW := 3

NUM_FUNC_HIGH := 20 # (default 10)
NUM_FUNC_LOW := 2

CSMITH_DEFAULT_FLAGS := --no-checksum --quiet --concise

# Global Compile parameters
OPT_FLAGS := -O3

# Auxilary functions
gen_bench = ./generate_benchmark.sh $@ $(BENCH_SIZE) $(BENCH_MAIN_REPEAT) $(BENCH_LOOP_REPEAT) $(BENCH_ARG) 
compile_bench = ./compile_benchmarks.sh $(OPT_FLAGS)
profile_bench = ./profile_benchmarks.sh
visualize_profiles = ./visualize_profiles.sh
export ROOT_DIR=$(PWD)


BENCHMARKS := branches loops_short loops_long dense_blas_int dense_blas_float sparse_blas_int sparse_blas_float default
TARGETS := $(BENCHMARKS) compile profile visualize

all: $(TARGETS)


branches: 
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--max-funcs $(NUM_FUNC_LOW) \
						--max-pointer-depth $(POINTER_DEPTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_LOW) \
						)

	$(call gen_bench)

loops_short:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--max-block-depth $(BLOCK_DEPTH_LOW) \
						--max-array-dim $(ARRAY_DEPTH_HIGH) \
						--max-array-len-per-dim $(ARRAY_LENGTH_HIGH)  \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)

	$(call gen_bench)

loops_long: 
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--max-block-depth $(BLOCK_DEPTH_HIGH) \
						--max-array-dim $(ARRAY_DEPTH_HIGH) \
						--max-array-len-per-dim $(ARRAY_LENGTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)

	$(call gen_bench)

funcs_short:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-volatiles \
						--max-funcs $(NUM_FUNC_HIGH) \
						--max-block-size $(BLOCK_DEPTH_LOW) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

funcs_long:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-volatiles \
						--max-funcs $(NUM_FUNC_HIGH) \
						--max-block-size $(BLOCK_DEPTH_HIGH) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

dense_blas_int:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-jumps \
						--no-float \
						--no-pointers \
						--no-volatiles \
						--max-array-dim $(ARRAY_DEPTH_HIGH) \
						--max-array-len-per-dim $(ARRAY_LENGTH_HIGH) \
						--max-block-depth $(BLOCK_DEPTH_HIGH) \
						--max-block-size $(BLOCK_LENGTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

dense_blas_float:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-jumps \
						--no-int8 \
						--no-longlong \
						--max-block-size 20 \
						--max-expr-complexity 10 \
						--no-pointers \
						--no-volatiles \
						--max-array-dim $(ARRAY_DEPTH_HIGH) \
						--max-array-len-per-dim $(ARRAY_LENGTH_HIGH) \
						--max-block-depth $(BLOCK_DEPTH_HIGH) \
						--max-block-size $(BLOCK_LENGTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

sparse_blas_int:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-jumps \
						--no-float \
						--no-arrays \
						--no-volatiles \
						--max-pointer-depth $(POINTER_DEPTH_HIGH) \
						--max-block-depth $(BLOCK_DEPTH_HIGH) \
						--max-block-size $(BLOCK_LENGTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

sparse_blas_float:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS) \
						--no-jumps \
						--no-int8 \
						--no-longlong \
						--no-arrays \
						--no-volatiles \
						--max-pointer-depth $(POINTER_DEPTH_HIGH) \
						--max-block-depth $(BLOCK_DEPTH_HIGH) \
						--max-block-size $(BLOCK_LENGTH_HIGH) \
						--max-expr-complexity $(EXP_COMPLEXITY_HIGH) \
						)
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)

default:
	$(eval BENCH_ARG := $(CSMITH_DEFAULT_FLAGS))
	$(eval BENCH_LOOP_REPEAT := 50)
	$(call gen_bench)




compile: 
	$(call compile_bench)


profile: 
	$(call profile_bench)
 

visualize:
	$(call visualize_profiles)



# Clean routines
clean_all:
	rm -rf benchmarks

clean_source:
	rm -rf benchmarks/source

clean_compile:
	rm -rf benchmarks/exe
	
clean_profile:
	rm -rf benchmarks/profile
	
clean_visualization:
	rm -rf benchmarks/visualization