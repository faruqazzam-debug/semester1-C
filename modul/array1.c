#include <stdio.h>

int main() {
    int bilangan;
    
    scanf("%d", &bilangan);
    
    if (bilangan % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
    
    return 0;
}