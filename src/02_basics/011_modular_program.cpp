#include <iostream>
#include "02_basics/011_modular_program.h"

using namespace std;

// Two different ways to do it:
//   1. Return result of calculation directly, right away (area).
//   2. Initialize, assign, then return (perimeter).

int area(int width, int height)
{
    return width * height;
}

int perimeter(int width, int height)
{
    int peri;
    peri = 2 * (width + height);
    return peri;
}

// print_modular_program calculates the area and perimeter
// of a rectangle with the given width and height.
// This gives the same result as the monolithic program,
// but achieves it in a different way.
void print_modular_program()
{
    int width = 0;
    int height = 0;

    printf("Enter width and height: ");
    cin >> width >> height;

    int a = area(width, height);
    int p = perimeter(width, height);

    printf("area = %i\nperimeter=%i\n", a, p);
}
