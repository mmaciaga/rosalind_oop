#include "prot_mass.h"

double prot_mass::calc_mass() {
    double total = 0.0;
    for ( size_t i = 0; i < seq.size(); ++i ) {
        char aa = seq[i];
        total = total + mass_table.at(aa);
    }
    return total;
}