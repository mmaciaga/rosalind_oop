#include "deadRabbits.h"
#include <vector>

size_t deadRabbits::mortal() {
    array<size_t, 20> ages{};
    ages[0] = 1;

    for (int month = 1; month < n; ++month) {
        size_t new_rabbits = 0;

        for (int age = 1; age < k; ++age) {
            new_rabbits += ages[age];
        }

        for (int age = k-1; age > 0; --age) {
            ages[age] = ages[age-1];
        }

        ages[0] = new_rabbits;;
    }

    size_t total = 0;
    for (int age = 0; age < k; ++age) total += ages[age];

    return total;
}