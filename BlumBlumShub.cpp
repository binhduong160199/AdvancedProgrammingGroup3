#include "BlumBlumShub.h"

BlumBlumShub::BlumBlumShub(uint64_t seed, uint64_t primeP, uint64_t primeQ) {
    modulus = primeP * primeQ;               // compute modulus
    currentState = seed % modulus;           // initialize state
    if (currentState == 0) currentState = 3; // avoid stuck state at 0
}

// Generate one random bit
uint32_t BlumBlumShub::nextBit() {
    currentState = (currentState * currentState) % modulus; // recurrence
    return currentState % 2;                                // lowest bit
}

// Generate one 32-bit random integer
uint32_t BlumBlumShub::nextInt() {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        result = (result << 1) | nextBit();
    }
    return result;
}

// Implement abstract base class method
uint64_t BlumBlumShub::next() {
    return nextInt(); // return 32-bit random number as uint64_t
}