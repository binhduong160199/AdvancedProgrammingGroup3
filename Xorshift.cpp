#include "Xorshift.h"

uint64_t Xorshift::next()
{
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}
