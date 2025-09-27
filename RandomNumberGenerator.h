#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include <iostream>

class RandomNumberGenerator {
public:
    virtual ~RandomNumberGenerator() = default;
    virtual uint64_t next() = 0; // produce next random number
};

#endif RANDOMNUMBERGENERATOR_H