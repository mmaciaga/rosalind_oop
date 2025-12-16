#include "fibonacci.h"

#include <iostream>

void fibonacci::store_int(const string& path, int& n, int& k) {
    std::ifstream file(path);
    file >> n >> k;
}

size_t fibonacci::rabbit_pairs() {
    size_t f1 = 1, f2 = 1, curr = 0;

    for (int i = 3; i <= n; ++i) {
        curr = f1 + k * f2;
        f2 = f1;
        f1 = curr;
    }
    return curr;
}