#include <iostream>
#include "02_basics/009_struct_as_parameter.h"

using namespace std;

void struct_call_by_value(Rectangle3 r)
{
    // C++ syntax: Don't include "struct" before Rectangle3.
    // Since this is call by value and parameters therefore have their
    // scope within this 006_function...
    //   1. it's okay to reuse the name "r".
    //   2. Modifications to the passed Rectangle3 object are local,
    //      since the object is a copy of the one that was passed.
    r.width = 20;
    printf("Inside struct_call_by_value:\n");
    printf("  width: %i\n  height: %i\n", r.width, r.height);
}

void print_struct_call_by_value()
{
    // C syntax: Include "struct".
    struct Rectangle3 r = {10, 5};
    struct_call_by_value(r);

    printf("Outside struct_call_by_value:\n");
    printf("  width: %i\n  height: %i\n", r.width, r.height);
}

void struct_call_by_address(Rectangle3 *p)
{
    p->width = 20;
    printf("Inside struct_call_by_address:\n");
    printf("  width: %i\n  height: %i\n", p->width, p->height);
}

void print_struct_call_by_address()
{
    // C++ syntax: No "struct" keyword.
    Rectangle3 r = {10, 5};
    struct_call_by_address(&r);

    printf("Outside struct_call_by_address:\n");
    printf("  width: %i\n  height: %i\n", r.width, r.height);
}

void struct_with_array_call_by_value(ArrayContainer ac)
{
    ac.arr[0] = 9;
    printf("Inside struct_with_array_call_by_value:\n");
    printf("  num: %i\n  arr: ", ac.num);
    int length = sizeof(ac.arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << ac.arr[i] << " ";
    }
    cout << "\n";
}

void print_struct_with_array_call_by_value()
{
    // We should see that the array field is copied as a
    // formal parameter.
    ArrayContainer ac = {8, {1, 2, 3, 4}};
    struct_with_array_call_by_value(ac);

    printf("Outside struct_with_array_call_by_address:\n");
    printf("  num: %i\n  arr: ", ac.num);
    int length = sizeof(ac.arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << ac.arr[i] << " ";
    }
    cout << "\n";
}

void struct_with_array_call_by_address(ArrayContainer *p)
{
    p->arr[0] = 9;
    printf("Inside struct_with_array_call_by_address:\n");
    printf("  num: %i\n  arr: ", p->num);
    int length = sizeof(p->arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << p->arr[i] << " ";
    }
    cout << "\n";
}

void print_struct_with_array_call_by_address()
{
    // We should see that the array field is NOT copied as a
    // formal parameter.
    ArrayContainer ac = {8, {1, 2, 3, 4}};
    struct_with_array_call_by_address(&ac);

    printf("Outside struct_with_array_call_by_address:\n");
    printf("  num: %i\n  arr: ", ac.num);
    int length = sizeof(ac.arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << ac.arr[i] << " ";
    }
    cout << "\n";
}

struct Rectangle3 *make_rectangle()
{
    struct Rectangle3 *p;
    p = new Rectangle3;

    p->width = 8;
    p->height = 17;

    return p;
}

void print_struct_from_factory()
{
    struct Rectangle3 *p = make_rectangle();

    printf("From factory:\n");
    printf("  width: %i\n", p->width);
    printf("  height: %i\n", p->height);

    delete p;
}
