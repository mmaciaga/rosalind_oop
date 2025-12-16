#include <iostream>
#include <ostream>

#include "solution.h"
#include "hamming.h"
#include <string>

using namespace std;

int main() {
    solution s;
    s.c_nt();
    s.transcribe();
    s.rev_comp();
    s.translate();
    s.mrna();
    s.fib();
    s.dead_rabbits();
    s.protein_mass();
    s.hamm();
    return 0;
}
