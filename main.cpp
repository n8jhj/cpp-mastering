#include <stdio.h>

#include "basics/struct.h"
#include "basics/pointer.h"
#include "basics/reference.h"
#include "basics/pointer_to_struct.h"
#include "basics/function.h"

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

int main()
{
    do_function();

    return 0;
}
