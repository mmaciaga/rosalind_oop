#include "solution.h"

#include "sequence.h"
#include "deadRabbits.h"
#include "dna.h"
#include "fibonacci.h"
#include "protein.h"
#include "revcomp.h"
#include "translation.h"
#include <string>
#include <iostream>

#include "proteinMass.h"
using namespace std;

void solution::c_nt() {
    sequence s(sequence::store_seq("/Users/magdamaciaga/Downloads/rosalind_dna.txt"));
    s.count_nt();
}

void solution::transcribe() {
    dna d("/Users/magdamaciaga/Downloads/rosalind_rna.txt");
    cout << d.transcription() << endl;
}

void solution::rev_comp() {
    revcomp rc("/Users/magdamaciaga/Downloads/rosalind_revc.txt");
    cout << rc.rev_complement() << endl;
}

void solution::translate() {
    translation t("/Users/magdamaciaga/Downloads/rosalind_prot.txt");
    cout << t.translate() << endl;
}

void solution::mrna() {
    protein p("/Users/magdamaciaga/Downloads/rosalind_mrna.txt");
    cout << p.mrna() << endl;
}

void solution::fib() {
    fibonacci f("/Users/magdamaciaga/Downloads/rosalind_fib.txt");
    cout << f.rabbit_pairs() << endl;
}

void solution::dead_rabbits() {
    deadRabbits dr("/Users/magdamaciaga/Downloads/rosalind_fibd.txt");
    cout << dr.mortal() << endl;
}

void solution::protein_mass() {
    proteinMass pm("/Users/magdamaciaga/Downloads/rosalind_prtm.txt");
    cout << fixed << setprecision(5) << pm.calc_mass() << endl;
}