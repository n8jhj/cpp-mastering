#include <iostream>
#include "02_basics/014_class.h"

using namespace std;

Rectangle6::Rectangle6()
{
    width = 0;
    height = 0;
}

Rectangle6::Rectangle6(int w, int h)
{
    width = w;
    height = h;
}

Rectangle6::~Rectangle6()
{
    cout << "<Rectangle6 Desctructor>\n";
}

int Rectangle6::area()
{
    return width * height;
}

int Rectangle6::perimeter()
{
    return 2 * (width + height);
}

void Rectangle6::setWidth(int w)
{
    width = w;
}

int Rectangle6::getWidth()
{
    return width;
}

void Rectangle6::setHeight(int h)
{
    height = h;
}

int Rectangle6::getHeight()
{
    return height;
}

void print_class()
{
    Rectangle6 rect(10, 5);
    printf("Area: %i\n", rect.area());
    printf("Perimeter: %i\n", rect.perimeter());
}
