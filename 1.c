#include <stdio.h>
#include <time.h>
#include <limits.h>
int main() {
    time_t t = 1;
    time_t prev = 0;
    while (t > prev_t) {
        t++; 
    }
    printf("Максимальне значення time_t: %s", ctime(&prev));
    return 0;
}
