#include <stdio.h>
#include <stdlib.h>
int global_var = 42;
static int static_var = 99;
void recursive_function(int depth) {
    int local_array[10000];
    printf("Stack at depth %d: %p\n", depth, &local_array);
    if (depth > 0)
        recursive_function(depth - 1);
}
int main() {
    int local_var;
    char *heap_var = malloc(1024); 

    printf("Code segment (function address): %p\n", (void*)main);
    printf("Data segment (global variable): %p\n", (void*)&global_var);
    printf("Data segment (static variable): %p\n", (void*)&static_var);
    printf("Stack segment (local variable): %p\n", (void*)&local_var);
    printf("Heap segment (malloc'd memory): %p\n", (void*)heap_var);
    
    recursive_function(3);
    
    free(heap_var);
    return 0;
}