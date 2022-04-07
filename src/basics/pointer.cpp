#include <iostream>

using namespace std;

void print_pointer() {
    int a = 10;
    int* p; // Declaration of pointer type.
    p = &a; // Referencing.

    cout << "a: " << a << "\n";
    cout << "Address of a: " << &a << "\n";
    // Dereferencing. Format spec code "p" for pointers.
    printf("Using pointer %d at address %p\n", *p, p);
}
