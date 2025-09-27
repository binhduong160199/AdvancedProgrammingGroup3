//
// Created by Binh Duong Nguyen on 27.09.25.
//

#ifndef BLUMBLUMSHUB_H
#define BLUMBLUMSHUB_H

#include <cstdint>

class BlumBlumShub {
private:
    uint64_t state; // aktueller Zustand x_n
    uint64_t M;     // Modulus = p * q

public:
    // Konstruktor mit Startwert (Seed), p und q
    BlumBlumShub(uint64_t seed, uint64_t p, uint64_t q);

    // Liefert 1 Zufallsbit (0 oder 1)
    uint32_t nextBit();

    // Liefert eine 32-Bit Zufallszahl
    uint32_t nextInt();
};

#endif // BLUMBLUMSHUB_H