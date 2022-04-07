#include <stdio.h>

#include "basics/struct.h"
#include "basics/pointer.h"

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

int main() {
    do_pointer();

    return 0;
}
