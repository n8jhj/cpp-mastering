#include <stdio.h>

#include "basics/001_array.h"
#include "basics/002_struct.h"
#include "basics/003_pointer.h"
#include "basics/004_reference.h"
#include "basics/005_pointer_to_struct.h"
#include "basics/006_function.h"
#include "basics/007_parameter_passing.h"
#include "basics/008_array_as_parameter.h"
#include "basics/009_struct_as_parameter.h"
#include "basics/010_monolithic_program.h"

/*
Each function defined in this file illustrates the concepts learned
in one of the lessons of the course.
The functions are meant to be run one at a time.
*/

/*
Each function defined in this file illustrates the concepts learned
in one of the lessons of the course.
The functions are meant to be run one at a time.
*/

void do_array()
{
    print_array();
    printf("\n");
    print_variable_sized_array();
}

void do_struct()
{
    print_rectangle();
}

void do_pointer()
{
    print_var_pointer();
    printf("\n");
    print_stack_array_pointer();
    printf("\n");
    print_heap_array_pointer();
    printf("\n");
    print_pointer_sizes();
}

void do_reference()
{
    print_reference();
}

void do_pointer_to_struct()
{
    print_pointer_to_struct();
    printf("\n");
    print_pointer_to_struct_in_heap();
}

void do_function()
{
    print_function_result();
}

void do_parameter_passing()
{
    printf("call by value -- sum():\n");
    print_call_by_value();
    printf("\n");
    printf("call by address -- swap():\n");
    print_call_by_address();
    printf("\n");
    printf("call by reference -- swap_ref():\n");
    print_call_by_reference();
}

void do_array_as_parameter()
{
    print_array_as_parameter();
    printf("\n");
    print_array_from_factory();
}

void do_struct_as_parameter()
{
    print_struct_call_by_value();
    printf("\n");
    print_struct_call_by_address();
    printf("\n");
    print_struct_with_array_call_by_value();
    printf("\n");
    print_struct_with_array_call_by_address();
    printf("\n");
    print_struct_from_factory();
}

void do_monolithic_program()
{
    print_monolithic_program();
}

int main()
{
    do_monolithic_program();

    return 0;
}
