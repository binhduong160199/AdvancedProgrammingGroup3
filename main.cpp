#include <iostream>
#include <cstdint>

class BlumBlumShub {
private:
    uint64_t state; // aktueller Zustand x_n
    uint64_t M;     // Modulus = p * q

public:
    // Konstruktor mit Startwert (Seed), p und q
    BlumBlumShub(uint64_t seed, uint64_t p, uint64_t q) {
        M = p * q;              // Modulus berechnen
        state = seed % M;       // Startwert mod M
        if (state == 0) state = 3; // 0 vermeiden (würde festhängen)
    }

    // Liefert 1 Zufallsbit (0 oder 1)
    uint32_t nextBit() {
        state = (state * state) % M; // Rekurrenz: x_{n+1} = (x_n^2 mod M)
        return state % 2;            // niedrigstes Bit extrahieren
    }

    // Liefert eine 32-Bit Zufallszahl (aus 32 Bits zusammengesetzt)
    uint32_t nextInt() {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            // Ergebnis nach links schieben und neues Bit anhängen
            result = (result << 1) | nextBit();
        }
        return result;
    }
};

int main() {
    // Beispiel: p und q sind Primzahlen, beide kongruent zu 3 mod 4
    BlumBlumShub bbs(8731, 499, 547);

    std::cout << "10 Zufallszahlen mit Blum-Blum-Shub:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << bbs.nextInt() << std::endl;
    }
}