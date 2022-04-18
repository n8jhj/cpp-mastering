#ifndef BASICS_STRUCT_AS_PARAMETER_H
#define BASICS_STRUCT_AS_PARAMETER_H

struct Rectangle3
{
    int width;
    int height;
};

struct ArrayContainer
{
    int num;
    int arr[4];
};

void print_struct_call_by_value();
void print_struct_call_by_address();
void print_struct_with_array_call_by_value();
void print_struct_with_array_call_by_address();
void print_struct_from_factory();

#endif // BASICS_STRUCT_AS_PARAMETER_H
