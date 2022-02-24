# Global Benchmark parameters
BENCHMARKS := branches loops_short loops_long dense_blas_int dense_blas_float sparse_blas_int sparse_blas_float default
BENCH_SIZE := 1
BENCH_LOOP_EXTEND := 4
CSMITH_DEFAULT_FLAGS := --no-checksum --quiet --concise

# Global Compile parameters
OPT_FLAGS := -O0

# Auxilary functions
gen_bench = ./generate_benchmark.sh $@ $(BENCH_SIZE) $(BENCH_LOOP_EXTEND) $(BENCH_ARG) 
compile_bench = ./compile_benchmarks.sh $(OPT_FLAGS)
profile_bench = ./profile_benchmarks.sh
visualize_profiles = ./visualize_profiles.sh
export ROOT_DIR=$(PWD)



TARGETS := $(BENCHMARKS) compile profile visualize

all: $(TARGETS)


branches: 
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --max-funcs 1 --max-pointer-depth 10 --max-expr-complexity 2")
	$(eval BENCH_LOOP_EXTEND := 2)
	$(call gen_bench)

loops_short:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --max-block-depth 3 --max-array-dim 1000 --max-array-len-per-dim 1000  --max-expr-complexity 10")
	$(eval BENCH_LOOP_EXTEND := 2)
	$(call gen_bench)

loops_long: 
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --max-block-depth 20 --max-array-dim 1000 --max-array-len-per-dim 1000 --max-expr-complexity 10")
	$(eval BENCH_LOOP_EXTEND := 2)
	$(call gen_bench)

funcs_short:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --max-funcs 50 --max-block-size 4 --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

funcs_long:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --max-funcs 50 --max-block-size 20 --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

dense_blas_int:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --no-jumps --no-float --max-array-dim 1000 --max-array-len-per-dim 5 --max-block-depth 10 --max-block-size 20 --max-expr-complexity 10 --no-pointers --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

dense_blas_float:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --no-jumps --no-int8 --no-longlong --max-array-dim 1000 --max-array-len-per-dim 5 --max-block-depth 10 --max-block-size 20 --max-expr-complexity 10 --no-pointers --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

sparse_blas_int:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --no-jumps --no-float --max-block-depth 10 --max-block-size 20 --max-expr-complexity 10 --no-arrays --max-pointer-depth 10 --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

sparse_blas_float:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS) --no-jumps --no-int8 --no-longlong --max-block-depth 10 --max-block-size 20 --max-expr-complexity 10 --no-arrays --max-pointer-depth 10 --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 50)
	$(call gen_bench)

default:
	$(eval BENCH_ARG := "$(CSMITH_DEFAULT_FLAGS)")
	$(eval BENCH_LOOP_EXTEND := 50)
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