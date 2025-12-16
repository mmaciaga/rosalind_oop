#ifndef ROSALIND_PROTEIN_H
#define ROSALIND_PROTEIN_H
#include "translation.h"


class protein: public translation {
    public:
        unordered_map<char, int> codons;
        explicit protein(const string& path): translation(path) {
            codons = {
                {'F', 2}, {'L', 6}, {'I', 3}, {'M', 1}, {'V', 4},
                {'S', 6}, {'P', 4}, {'T', 4}, {'A', 4}, {'Y', 2},
                {'H', 2}, {'Q', 2}, {'N', 2}, {'K', 2}, {'D', 2},
                {'E', 2}, {'C', 2}, {'W', 1}, {'R', 6}, {'G', 4}
            };
        };
        long mrna();
};


#endif //ROSALIND_PROTEIN_H