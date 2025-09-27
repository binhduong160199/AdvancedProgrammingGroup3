#include "Xorshift.h"
#include "MiddleSquare.h"
#include "Benchmark.h"
#include <iostream>

int main() {
    std::cout << "=== Benchmark (1 million iterations) ===" << std::endl;
    Xorshift xs2(2463534242u);
    MiddleSquare ms2(6759);

    benchmark(xs2, "Xorshift", 1000000);
    benchmark(ms2, "Middle Square", 1000000);

    return 0;
}