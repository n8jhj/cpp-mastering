#include <iostream>

using namespace std;

void print_array()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14};

    // Each int is 4 bytes. There are ten, so size will be 40 bytes.
    cout << sizeof(arr) << "\n";
    cout << arr[6] << "\n";
    // Zeros begin where no values were assigned.
    cout << arr[7] << "\n";
    printf("%d\n", arr[9]);

    // Use a foreach loop to print values.
    // Apparently this syntax w/o brackets is accepted.
    for (int x : arr)
        cout << x << " ";
    cout << "\n";
}

void print_variable_sized_array()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    // This is illegal in proper C++.
    // The G++ compiler allows it as an extension though,
    // because C allows it.
    // https://stackoverflow.com/a/15013295/7232335
    int arr[size] = {2, 4, 6, 8, 10, 12, 14};

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";

    // Otherwise, you can either assign values by individual indices
    // or take values in a loop.
    int arr2[size];
    arr2[0] = 1;
    arr2[1] = 3;
    for (int i = 2; i < size; i++)
    {
        cout << "Another number, please! ";
        cin >> arr2[i];
    }
    cout << "\n";

    for (int x : arr2)
    {
        cout << x << " ";
    }
    cout << "\n";
}
