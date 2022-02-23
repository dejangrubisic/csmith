# Builds datasets

TARGETS := branches loops arrays funcs
gen_bench = ./generate_benchmark.sh $@ $(BENCH_SIZE) $(BENCH_LOOP_EXTEND) $(BENCH_ARG) 
compile_bench = ./compile_benchmarks.sh 
profile_bench = ./profile_benchmarks.sh
visualize_profiles = ./visualize_profiles.sh

# Global Benchmark parameters
BENCH_SIZE := 2
BENCH_SEED := 152
BENCH_LOOP_EXTEND := 2

export ROOT_DIR=$(PWD)

all: $(TARGETS)

branches: 
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-funcs 1 --max-pointer-depth 5")
	$(eval BENCH_LOOP_EXTEND := 2)

	$(call gen_bench)

loops: 
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-block-depth 5 --array-oob-prob 0.5")
	$(eval BENCH_LOOP_EXTEND := 2)
	$(call gen_bench)


arrays:
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-array-dim 3 --max-array-len-per-dim 1000 --max-block-depth 3 --max-expr-complexity 10")
	$(eval BENCH_LOOP_EXTEND := 2)
	$(call gen_bench)


funcs:
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-funcs 50 --no-volatiles")
	$(eval BENCH_LOOP_EXTEND := 0)
	$(call gen_bench)


compile: 
	$(call compile_bench)


profile: 
	$(call profile_bench)
 

visualization:
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