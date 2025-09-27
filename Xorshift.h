#include "RandomNumberGenerator.h"

class Xorshift : public RandomNumberGenerator {
private:
    uint32_t state;
public:
    Xorshift(uint32_t seed = 2463534242u) : state(seed) {}
    uint64_t next() override;
};