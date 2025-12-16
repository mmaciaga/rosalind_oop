#include "hamming.h"

#include <fstream>

#include "dna.h"

pair<string, string> hamming::store_seqs(const string& path) {
    ifstream file(path);
    getline(file, dna1);
    getline(file, dna2);
    return pair<string, string>(dna1, dna2);
}

size_t hamming::distance() {
    size_t distance = 0;
    for (size_t i = 0; i < dna1.size(); i++) {
        if (dna1[i] != dna2[i]) {
            distance++;
        }
    }
    return distance;
}