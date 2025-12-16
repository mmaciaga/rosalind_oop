#ifndef ROSALIND_SEQUENCE_H
#define ROSALIND_SEQUENCE_H

#include <string>
using namespace std;

class sequence {
    protected:
        string seq;
    public:
        explicit sequence(const string& s): seq(s) {};
        static string store_seq(string path);
        void count_nt();
};


#endif //ROSALIND_SEQUENCE_H