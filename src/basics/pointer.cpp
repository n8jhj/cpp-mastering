#include <iostream>

using namespace std;

void print_var_pointer() {
    int a = 10;
    int* p; // Declaration of pointer type.
    p = &a; // Referencing.

    cout << "a: " << a << "\n";
    cout << "Address of a: " << &a << "\n";
    // Dereferencing. Format spec code "p" for pointers.
    printf("Using pointer %d at address %p\n", *p, p);
}

void print_stack_array_pointer() {
    // Create an array inside the stack.
    // This is the default for variables you create in your functions.
    int arr[5] = {2, 4, 6, 8, 10};
    int* p;
    int* e;
    // Where's the & symbol here? It's implicit with arrays.
    // &arr is invalid syntax.
    p = arr;
    // But you still & with individual elements.
    e = &arr[0];

    cout << "Array in stack:\n";
    // Interesting: this "for" syntax w/o brackets.
    for (int i = 0; i < 5; i++)
        // Can use pointer in place of array name.
        cout << arr[i] << ", " << p[i] << "\n";
}

void print_heap_array_pointer() {
    // Create an array inside the heap.
    int* p;
    int* r;

    // C syntax:
    p = (int*)malloc(5 * sizeof(int));

    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 21;
    p[4] = 31;

    // C++ syntax:
    r = new int[5];

    r[0] = -12;
    r[1] = -4;
    r[2] = -23;
    r[3] = 44;
    r[4] = 9;

    cout << "Array in heap:\n";
    cout << "Init'd w/ C syntax (malloc):\n";
    for (int i = 0; i < 5; i++)
        cout << p[i] << "\n";

    cout << "Init'd w/ C++ syntax (new):\n";
    for (int i = 0; i < 5; i++)
        cout << r[i] << "\n";

    // With dynamically allocated memory, we must free it up
    // when we're done with it.
    // In large projects, such as a running service, this becomes
    // very important.
    //
    // For arrays, use "[]". Other variables, just use its name.
    // C: free
    // C++: delete
    free(p);
    delete []r;
}

struct Rectangle {
    int width;
    int height;
};

void print_pointer_sizes() {
    int* p1;
    char* p2;
    float* p3;
    double* p4;
    struct Rectangle* p5;

    // Every pointer takes the same amount of memory.
    // Latest compilers: 8 bytes in 64-bit machines.
    // Earlier: 4 bytes.
    cout << "Pointer sizes:\n";
    cout << sizeof(p1) << "\n";
    cout << sizeof(p2) << "\n";
    cout << sizeof(p3) << "\n";
    cout << sizeof(p4) << "\n";
    cout << sizeof(p5) << "\n";
}
