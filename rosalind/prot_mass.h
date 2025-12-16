#ifndef ROSALIND_PROT_MASS_H
#define ROSALIND_PROT_MASS_H

#include <map>

#include "translation.h"
using namespace std;

class prot_mass: public translation {
    public:
        unordered_map<char, double> mass_table;
        explicit prot_mass(const string& path): translation(path) {
            codons = {
                {'F', 147.06841}, {'L', 113.08406}, {'I', 113.08406}, {'M', 131.04049},
                {'V', 99.06841}, {'S', 87.03203}, {'P', 97.05276}, {'T', 101.04768},
                {'A', 71.03711}, {'Y', 163.06333 }, {'H', 137.05891}, {'Q', 128.05858},
                {'N', 114.04293}, {'K', 128.09496}, {'D', 115.02694}, {'E', 129.04259},
                {'C', 103.00919}, {'W', 186.07931}, {'R', 156.10111}, {'G', 57.02146}
            };
        };

};


#endif //ROSALIND_PROT_MASS_H