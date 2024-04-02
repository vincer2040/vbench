#include <stdio.h>
#include "vbench.h"

int main(void) {
    size_t i;
	BENCH("sum", 8, 64) {
		unsigned int sum = 0;
		for (i = 0; i < 1024*16u; ++i) {
			sum += i;
			BENCH_VOLATILE_REG(sum);
		}
	}
	BENCH("product", 8, 64) {
		unsigned char sum = 0;
		for (i = 0; i < 1024*16u; ++i) {
			sum *= i;
			BENCH_VOLATILE_REG(sum);
		}
	}
	bench_done();
    bench_free();
	return 0;
}
