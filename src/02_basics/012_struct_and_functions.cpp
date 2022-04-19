#include <iostream>
#include "02_basics/012_struct_and_functions.h"

using namespace std;

void initialize(Rectangle4 *r, int width, int height)
{
    r->width = width;
    r->height = height;
}

int area(Rectangle4 r)
{
    return r.width * r.height;
}

int perimeter(Rectangle4 r)
{
    int peri;
    peri = 2 * (r.width + r.height);
    return peri;
}

void print_struct_and_functions()
{
    Rectangle4 rect = {0, 0};

    int width = 0;
    int height = 0;

    printf("Enter width and height: ");
    cin >> width >> height;

    initialize(&rect, width, height);

    int a = area(rect);
    int p = perimeter(rect);

    printf("area = %i\nperimeter=%i\n", a, p);
}
