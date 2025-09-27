#include "Xorshift.h"
#include "MiddleSquare.h"
#include "Benchmark.h"
#include <iostream>
#include "BlumBlumShub.h"

int main() {
    std::cout << "=== Benchmark (1 million iterations) ===" << std::endl;
    Xorshift xs2(2463534242u);
    MiddleSquare ms2(6759);

    benchmark(xs2, "Xorshift", 1000000);
    benchmark(ms2, "Middle Square", 1000000);

    // Beispiel: p und q sind Primzahlen, beide kongruent zu 3 mod 4
    BlumBlumShub bbs(8731, 499, 547);

    std::cout << "10 Zufallszahlen mit Blum-Blum-Shub:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << bbs.nextInt() << std::endl;
    }

    return 0;
}