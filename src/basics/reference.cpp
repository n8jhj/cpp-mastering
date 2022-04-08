#include <iostream>

using namespace std;

void print_reference() {
    int a = 10;
    // NOTE: References require initialization at the same time as
    // declaration.
    // Analogy: a's nickname. E.g. Rajendran -> Raj.
    int& r = a;

    int b = 25;
    r = b; // Doing this sets r and a to the same value as b.

    printf("a: %i\n", a); // %i is the same as %d.
    printf("b: %i\n", b);
    printf("r: %i\n", r);

    // CONCEPT: Reference doesn't consume any memory.
    // Behold, the reference has the same address as the
    // referenced variable. They are one.
    printf("address of a: %p\n", &a);
    printf("address of r: %p\n", &r);
}
