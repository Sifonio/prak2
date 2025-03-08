#include <stdio.h>
#include <stdlib.h>
void memory_leak() {
    int *ptr = (int *)malloc(10 * sizeof(int));  // Виділення пам’яті
    if (ptr == NULL) {
        printf("Помилка виділення пам'яті\n");
        return;
    }
    ptr[0] = 42;  
}

int main() {
    for (int i = 0; i < 100000; i++) {
        memory_leak();
    }
    return 0;
}
