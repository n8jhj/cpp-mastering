#include <iostream>
#include "basics/parameter_passing.h"

using namespace std;

int add2(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void print_call_by_value()
{
    int num1 = 10, num2 = 15, sum;
    sum = add2(num1, num2);
    printf("Sum of %i and %i: %i\n", num1, num2, sum);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void print_call_by_address()
{
    int num1 = 10;
    int num2 = 15;

    printf("At first: (%i, %i)\n", num1, num2);

    swap(&num1, &num2);

    printf("Then: (%i, %i)\n", num1, num2);
}

void swap_ref(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void print_call_by_reference()
{
    int num1 = 10;
    int num2 = 15;

    printf("At first: (%i, %i)\n", num1, num2);

    swap(num1, num2);

    printf("Then: (%i, %i)\n", num1, num2);
}
