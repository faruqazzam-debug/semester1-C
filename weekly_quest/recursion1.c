#include <stdio.h>

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * faktorial(n - 1);  
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0 || n <= 100) {
        printf("%d\n", faktorial(n));
    }

    return 0;
}