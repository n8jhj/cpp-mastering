#include <iostream>
#include "02_basics/013_object_oriented_program.h"

using namespace std;

void Rectangle5::initialize(int w, int h)
{
    width = w;
    height = h;
}

int Rectangle5::area()
{
    return width * height;
}

int Rectangle5::perimeter()
{
    int peri;
    peri = 2 * (width + height);
    return peri;
}

void print_object_oriented_program()
{
    Rectangle5 rect;

    int width = 0;
    int height = 0;

    printf("Enter width and height: ");
    cin >> width >> height;

    rect.initialize(width, height);

    int a = rect.area();
    int p = rect.perimeter();

    printf("area = %i\nperimeter=%i\n", a, p);
}
