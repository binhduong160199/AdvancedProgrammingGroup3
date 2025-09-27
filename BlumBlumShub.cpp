//
// Created by Binh Duong Nguyen on 27.09.25.
//

#include "BlumBlumShub.h"

// Konstruktor
BlumBlumShub::BlumBlumShub(uint64_t seed, uint64_t p, uint64_t q) {
    M = p * q;              // Modulus berechnen
    state = seed % M;       // Startwert mod M
    if (state == 0) state = 3; // 0 vermeiden (würde festhängen)
}

// Liefert 1 Zufallsbit
uint32_t BlumBlumShub::nextBit() {
    state = (state * state) % M; // Rekurrenz: x_{n+1} = (x_n^2 mod M)
    return state % 2;            // niedrigstes Bit extrahieren
}

// Liefert eine 32-Bit Zufallszahl
uint32_t BlumBlumShub::nextInt() {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        result = (result << 1) | nextBit();
    }
    return result;
}