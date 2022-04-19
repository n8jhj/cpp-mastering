#include <iostream>
#include "02_basics/005_pointer_to_struct.h"

using namespace std;

void print_pointer_to_struct()
{
    // C: You must declare "struct Rectangle2".
    // C++: Just "Rectangle2" is okay.
    Rectangle2 r = {10, 5};
    // Variable: use dot.
    cout << r.width << "\n";
    cout << r.height << "\n";

    // Pointer: use arrow.
    Rectangle2 *p = &r;
    cout << p->width << "\n";
    cout << p->height << "\n";
}

void print_pointer_to_struct_in_heap()
{
    // C syntax.
    struct Rectangle2 *p;
    p = (struct Rectangle2 *)malloc(sizeof(struct Rectangle2));

    p->width = 15;
    p->height = 7;

    printf("C syntax:\n");
    printf("  p->width: %i\n", p->width);
    printf("  p->height: %i\n", p->height);

    free(p);
    printf("  freed\n");

    // C++ syntax.
    Rectangle2 *r;
    r = new Rectangle2;

    r->width = 35;
    r->height = 27;

    cout << "C++ syntax:\n";
    cout << "  r->width: " << r->width << "\n";
    cout << "  r->height: " << r->height << "\n";

    delete r;
    cout << "  deleted\n";
}
