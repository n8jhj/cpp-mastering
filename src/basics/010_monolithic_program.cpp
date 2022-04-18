#include <iostream>
#include "basics/010_monolithic_program.h"

using namespace std;

void print_monolithic_program()
{
    int width = 0;
    int height = 0;

    printf("Enter width and height: ");
    cin >> width >> height;

    int area = width * height;
    int peri = 2 * (width + height);

    printf("area = %i\nperimeter=%i\n", area, peri);
}
