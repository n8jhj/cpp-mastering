#include <iostream>
#include "02_basics/002_struct.h"

using namespace std;

void print_rectangle()
{
    struct Rectangle r1 = {10, 5};

    r1.width = 12;

    cout << "r1.width: " << r1.width << "\n";
    cout << "r1.height: " << r1.height << "\n";

    // Becuase it's easier for the computer to read fields of the same size,
    // sizeof() will show 2 + 2 + 2 = 6 bytes (not 5). The char x field takes
    // 2 bytes instead of 1.
    // If you change the type of width and height to int32_t, you'll see that
    // the char x field will then take up 4 bytes.
    //
    // You can print the size of the class or the instance.
    // Here, the instance is used.
    //
    // Note the "%lu" (long unsigned) format spec code, rather than "%d".
    // Using "%d" will issue a compiler warning.
    printf("%lu\n", sizeof(r1));
}
