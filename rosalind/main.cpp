#include <iostream>
#include <ostream>

#include "solution.h"
using namespace std;

int main() {
    solution s;
    cout << "---- COUNTING DNA NUCLEOTIDES ----" << endl;
    s.c_nt();
    cout << "---- TRANSCRIBING DNA INTO RNA ----" << endl;
    s.transcribe();
    cout << "---- COMPLEMENTING A STRAND OF DNA ----" << endl;
    s.rev_comp();
    cout << "---- TRANSLATING RNA INTO PROTEIN ----" << endl;
    s.translate();
    cout << "---- INFERRING MRNA FROM PROTEIN ----" << endl;
    s.mrna();
    cout << "---- CALCULATING PROTEIN MASS ----" << endl;
    s.protein_mass();
    cout << "---- RABBITS AND RECURRENCE RELATIONS ----" << endl;
    s.fib();
    cout << "---- MORTAL FIBONACCI RABBITS ----" << endl;
    s.dead_rabbits();
    cout << "---- COUNTING POINT MUTATIONS ----" << endl;
    s.hamm();
    return 0;
}
