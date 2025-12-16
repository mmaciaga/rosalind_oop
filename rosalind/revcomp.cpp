#include "revcomp.h"
#include <string>
using namespace std;

string revcomp::rev_complement() {
    string rev_compl;
    for (string::iterator it = seq.begin(); it != seq.end(); it++) {
        switch (*it) {
            case 'A': rev_compl.append("T"); break;
            case 'C': rev_compl.append("G"); break;
            case 'G': rev_compl.append("C"); break;
            case 'T': rev_compl.append("A"); break;
            default: break;
        }
    }
    reverse(rev_compl.begin(), rev_compl.end());
    return rev_compl;
}