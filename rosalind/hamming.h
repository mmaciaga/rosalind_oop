#ifndef ROSALIND_HAMMING_H
#define ROSALIND_HAMMING_H

#include <string>
using namespace std;

class hamming {
    protected:
        string dna1, dna2;
    public:
        explicit hamming(const std::string& path) : dna1(store_seqs(path).first), dna2(store_seqs(path).second) {};
        pair<string, string> store_seqs(const string& path);
        size_t distance();
};

#endif //ROSALIND_HAMMING_H