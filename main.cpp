#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
} r1 = {12, 7};

int main() {
    // struct Rectangle r1 = {10, 5};

    cout << r1.width << "\n";
    cout << r1.height << "\n";
    printf("%lu\n", sizeof(r1));
    cout << sizeof(Rectangle) << "\n";

    return 0;
}
