#include "RandomNumberGenerator.h"

class MiddleSquare : public RandomNumberGenerator {
private:
    uint32_t state;
public:
    explicit MiddleSquare(uint32_t seed = 6759) : state(seed) {}
    uint64_t next() override;
};