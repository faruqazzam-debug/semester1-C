#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++) {
        int isPrima = 1;
        
        if (i < 2) {
            isPrima = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrima = 0;
                    break;
                }
            }
        }
         if (isPrima) {
            printf("*");
        } else {
            printf("%d", i);
        }
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}