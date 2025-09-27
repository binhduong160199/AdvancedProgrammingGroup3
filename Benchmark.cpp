#include "Benchmark.h"

void benchmark(RandomNumberGenerator& gen, const std::string& name, int iterations) {
    auto start = std::chrono::high_resolution_clock::now();
    uint64_t checksum = 0;

    for (int i = 0; i < iterations; i++) {
        checksum += gen.next();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << name << " -> " << duration << " ms (checksum=" << checksum << ")\n";
}