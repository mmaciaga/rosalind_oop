#ifndef ROSALIND_REVCOMP_H
#define ROSALIND_REVCOMP_H

#include "sequence.h"

class revcomp: public sequence {
    public:
        string rev_complement();
        explicit revcomp(const string &file): sequence(store_seq(file)) {};
};


#endif //ROSALIND_REVCOMP_H