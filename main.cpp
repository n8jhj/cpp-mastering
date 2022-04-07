#include <stdio.h>

#include "basics/struct.h"
#include "basics/pointer.h"
#include "basics/reference.h"

void do_struct() {
    print_rectangle();
}

void do_pointer() {
    print_var_pointer();
    printf("\n");
    print_stack_array_pointer();
    printf("\n");
    print_heap_array_pointer();
    printf("\n");
    print_pointer_sizes();
}

void do_reference() {
    print_reference();
}

int main() {
    do_reference();

    return 0;
}
