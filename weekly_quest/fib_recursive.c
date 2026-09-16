#include <stdio.h>
#include <stdlib.h>

long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Failed to read integer\n");
        return 1;
    }
    printf("%ld\n", fib(n));
    return 0;
}