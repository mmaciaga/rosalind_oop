#ifndef ROSALIND_DEADRABBITS_H
#define ROSALIND_DEADRABBITS_H
#include "fibonacci.h"


class deadRabbits: public fibonacci {
public:
    explicit deadRabbits(const string &path): fibonacci(path) {};
    size_t mortal();
};


#endif //ROSALIND_DEADRABBITS_H