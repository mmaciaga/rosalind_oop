#include "protein.h"

long protein::mrna() {
    long total = 1;

    for ( size_t i = 0; i < seq.size(); ++i ) {
        char aa = seq[i];
        total = (total * codons.at(aa)) % 1000000;
    }

    total = (total * 3) % 1000000; // zeby byly tez kodony stop
    return total;
}



