#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void print_function_result()
{
    int num1 = 10, num2 = 15;
    int sum;

    sum = add(num1, num2);

    cout << "sum: " << sum << "\n";
}
