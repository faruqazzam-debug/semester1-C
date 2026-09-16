#include <stdio.h>

int main() {
    int a, b, sum = 0;
    
    printf("Input (A B): ");
    scanf("%d %d", &a, &b);
    
    // a lebih kecil dari b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) { // Cek bilangan genap
            sum += i;
        }
    }
    
    printf("Output:\n%d\n", sum);
    
    return 0;
}