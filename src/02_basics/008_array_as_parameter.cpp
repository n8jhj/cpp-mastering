#include <iostream>
#include "02_basics/008_array_as_parameter.h"

using namespace std;

void use_array(int *arr, int length)
{
    printf("Parameter arr is a pointer: %p\n", arr);
    printf("Its length is: %i\n", length);

    arr[0] = 19;

    cout << "Values after modifying arr[0]: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int *make_array_of_length(int length)
{
    int *p;
    p = new int[length]; // Allocate in heap.
    for (int i = 0; i < length; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

void print_array_as_parameter()
{
    int integers[] = {1, 2, 3, 4, 5};
    int length = sizeof(integers) / sizeof(int);
    use_array(integers, length);
}

void print_array_from_factory()
{
    int desired_length = 7;
    int *arr = make_array_of_length(desired_length);

    cout << "Constructed array: ";
    for (int i = 0; i < desired_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Yikes! I don't like having to delete this thing
    // outside the function it was created in!
    // Seems like a good way to forget to do this.
    delete[] arr;
}
