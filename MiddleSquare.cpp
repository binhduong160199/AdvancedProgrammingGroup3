#include "MiddleSquare.h"

uint64_t MiddleSquare::next()
{
    uint64_t squared = (uint64_t)state * state;
    state = (squared / 100) % 10000; 
    return state;
}
