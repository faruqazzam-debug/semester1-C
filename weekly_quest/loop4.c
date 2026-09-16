#include <stdio.h>

int main() {
    long long number;
    int count = 0;
    
    printf("Input: ");
    scanf("%lld", &number);
    
    // kasus kalo 0
    if (number == 0) {
        count = 1;
    } else {
        // hitung dengan loop
        long long temp = number;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }
    
    printf("Output: %d\n", count);
    
    return 0;
}