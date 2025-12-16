#ifndef ROSALIND_FIBONACCI_H
#define ROSALIND_FIBONACCI_H

#include <string>
#include <fstream>
using namespace std;

class fibonacci {
    public:
        int n, k;
        explicit fibonacci(const string& path) : n(0), k(0) {store_int(path, n, k);}
        static void store_int(const string& path, int& n, int& k);
        size_t rabbit_pairs();

};


#endif //ROSALIND_FIBONACCI_H