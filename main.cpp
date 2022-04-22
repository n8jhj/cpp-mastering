#include <stdio.h>

#include "02_basics/001_array.h"
#include "02_basics/002_struct.h"
#include "02_basics/003_pointer.h"
#include "02_basics/004_reference.h"
#include "02_basics/005_pointer_to_struct.h"
#include "02_basics/006_function.h"
#include "02_basics/007_parameter_passing.h"
#include "02_basics/008_array_as_parameter.h"
#include "02_basics/009_struct_as_parameter.h"
#include "02_basics/010_monolithic_program.h"
#include "02_basics/011_modular_program.h"
#include "02_basics/012_struct_and_functions.h"
#include "02_basics/013_object_oriented_program.h"
#include "02_basics/014_class.h"

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

void do_modular_program()
{
    print_modular_program();
}

void do_struct_and_functions()
{
    print_struct_and_functions();
}

void do_object_oriented_program()
{
    print_object_oriented_program();
}

void do_class()
{
    print_class();
}

int main()
{
    do_class();

    return 0;
}
