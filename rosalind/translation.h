#ifndef ROSALIND_TRANSLATION_H
#define ROSALIND_TRANSLATION_H

#include "dna.h"
#include <map>
#include  <iostream>
using namespace std;


class translation: public sequence {
    public:
        explicit translation(const string& path) : sequence(store_seq(path)) {};
        string translate();
        map<string, char> codons = {
            {"GCU", 'A'}, {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'},
            {"UGU", 'C'}, {"UGC", 'C'},
            {"GAU", 'D'}, {"GAC", 'D'},
            {"GAA", 'E'}, {"GAG", 'E'},
            {"UUU", 'F'}, {"UUC", 'F'},
            {"GGU", 'G'}, {"GGC", 'G'}, {"GGA", 'G'}, {"GGG", 'G'},
            {"CAU", 'H'}, {"CAC", 'H'},
            {"AUU", 'I'}, {"AUC", 'I'}, {"AUA", 'I'},
            {"AAA", 'K'}, {"AAG", 'K'},
            {"UUA", 'L'}, {"UUG", 'L'}, {"CUU", 'L'}, {"CUC", 'L'}, {"CUA", 'L'}, {"CUG", 'L'},
            {"AAU", 'N'}, {"AAC", 'N'},
            {"CCU", 'P'}, {"CCC", 'P'}, {"CCA", 'P'}, {"CCG", 'P'},
            {"CAA", 'Q'}, {"CAG", 'Q'},
            {"CGU", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'}, {"AGA", 'R'}, {"AGG", 'R'},
            {"UCU", 'S'}, {"UCC", 'S'}, {"UCA", 'S'}, {"UCG", 'S'}, {"AGU", 'S'}, {"AGC", 'S'},
            {"ACU", 'T'}, {"ACC", 'T'}, {"ACA", 'T'}, {"ACG", 'T'},
            {"GUU", 'V'}, {"GUC", 'V'}, {"GUA", 'V'}, {"GUG", 'V'},
            {"UGG", 'W'},
            {"UAU", 'Y'}, {"UAC", 'Y'},
            {"AUG", 'M'}, {"UAA", '|'}, {"UGA", '|'}, {"UAG", '|'}

        };
};


#endif //ROSALIND_TRANSLATION_H