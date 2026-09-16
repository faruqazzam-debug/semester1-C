#include <stdio.h>

int main() {
    int n;
    
    printf("Input: ");
    scanf("%d", &n);
    
    printf("Output:\n");
    for(int i = 1; i <= n; i++) {
        int start = (i % 2 == 1) ? 1 : 0; // Baris ganjil mulai 1, genap mulai 0
        
        for(int j = 1; j <= i; j++) {
            printf("%d", start);
            start = 1 - start; // Ganti antara 0 dan 1
        }
        printf("\n");
    }
    
    return 0;
}