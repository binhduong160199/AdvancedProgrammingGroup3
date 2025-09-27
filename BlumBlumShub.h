#ifndef BLUMBLUMSHUB_H
#define BLUMBLUMSHUB_H

#include <cstdint>
#include "RandomNumberGenerator.h"

class BlumBlumShub : public RandomNumberGenerator {
private:
    uint64_t currentState;   // current internal state
    uint64_t modulus;        // modulus = p * q
public:
    BlumBlumShub(uint64_t seed, uint64_t primeP, uint64_t primeQ);

    uint32_t nextBit();      // generates a single random bit
    uint32_t nextInt();      // generates a 32-bit random number
    uint64_t next() override; // required by RandomGenerator
};

#endif