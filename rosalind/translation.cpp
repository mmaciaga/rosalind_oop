#include "translation.h"

string translation::translate() {
    string aminoacids;
    for (size_t i = 0; i + 2 < seq.size(); i += 3) {
        string codon = seq.substr(i, 3);
        auto it = codons.find(codon);
        if (it == codons.end()) {
            aminoacids.push_back('?');
        } else if (it->second == '|') {
            aminoacids.push_back('|');
            break;
        } else {
            aminoacids.push_back(it->second);
        }
    }
    return aminoacids;
}