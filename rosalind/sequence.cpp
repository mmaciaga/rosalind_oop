#include "sequence.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

string sequence::store_seq(string path) {
    ifstream file(path);
    string line;
    string sequence;

    while (getline(file, line)) {
        sequence += line;
    }

    return sequence;
}

void sequence::count_nt() {
    int count_A = 0;
    int count_C = 0;
    int count_G = 0;
    int count_T = 0;

    for (std::string::const_iterator it = seq.begin(); it != seq.end(); ++it) {
        switch (*it) {
            case 'A': count_A++; break;
            case 'C': count_C++; break;
            case 'G': count_G++; break;
            case 'T': count_T++; break;
            default: break;
        }
    }

    std::cout << count_A << ' ' << count_C << ' ' << count_G << ' ' << count_T << std::endl;
}

