# Builds datasets

TARGETS := branches loops arrays
gen_fn = ./generate_benchmark.sh $@ $(BENCH_SIZE) $(BENCH_ARG)

# Global Benchmark parameters
BENCH_SIZE := 10
BENCH_SEED := 152


all: $(TARGETS)

branches: 
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-funcs 1 --max-pointer-depth 5")
	$(call gen_fn)

loops: 
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-block-depth 5 --array-oob-prob 0.5")
	$(call gen_fn)


arrays:
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-array-dim 3 --max-array-len-per-dim 1000 --max-block-depth 3 --max-expr-complexity 10")
	$(call gen_fn)


funcs:
	$(eval BENCH_ARG := "--seed $(BENCH_SEED) --max-funcs 100 --no-volatiles --builtins")
	$(call gen_fn)


clean:
	rm -rf $(TARGETS)

