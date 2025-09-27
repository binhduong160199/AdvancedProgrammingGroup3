#include "Xorshift.h"
#include "MiddleSquare.h"
#include "Benchmark.h"
#include <iostream>
using namespace std;

int main() {
    Xorshift xs(2463534242u);
    MiddleSquare ms(6759);

    cout << "Xorshift: ";
    for (int i = 0; i < 10; i++) cout << xs.next() << " ";
    cout << "\n";

    cout << "Middle Square: ";
    for (int i = 0; i < 10; i++) cout << ms.next() << " ";
    cout << "\n\n";

    cout << "=== Benchmark (1 million iterations) ===\n";
    Xorshift xs2(2463534242u);
    MiddleSquare ms2(6759);

    benchmark(xs2, "Xorshift", 1000000);
    benchmark(ms2, "Middle Square", 1000000);

    return 0;
}