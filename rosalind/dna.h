#ifndef ROSALIND_DNA_H
#define ROSALIND_DNA_H

#include "sequence.h"
#include <string>
#include <iostream>
using namespace std;

class dna: public sequence {
    public:
        string transcription();
        explicit dna(const string &file) : sequence(store_seq(file)) {};
};


#endif //ROSALIND_DNA_H

