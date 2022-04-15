#include <stdio.h>

#include "basics/struct.h"
#include "basics/pointer.h"
#include "basics/reference.h"
#include "basics/pointer_to_struct.h"
#include "basics/function.h"
#include "basics/parameter_passing.h"
#include "basics/array_as_parameter.h"

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

int main()
{
    do_array_as_parameter();

    return 0;
}
