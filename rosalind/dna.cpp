#include "dna.h"
#include <fstream>
#include <map>
using namespace std;


string dna::transcription() {
    string rna;

    for (string::const_iterator it = seq.begin(); it != seq.end(); it++) {
        switch (*it) {
            case 'A': rna += 'A'; break;
            case 'C': rna += 'C'; break;
            case 'G': rna += 'G'; break;
            case 'T': rna += 'U'; break;
            default: break;
        }
    }
    return rna;
}


