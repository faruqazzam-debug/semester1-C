#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    long long max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    if (max == a) {
        if (b * b + c * c == a * a) {
            printf("Yatta, aku bisa membentuk segitiga!");
        } else {
            printf("Gomenasai, segitiga tidak dapat dibuat.");
        }
    } else if (max == b) {
        if (a * a + c * c == b * b) {
            printf("Yatta, aku bisa membentuk segitiga!");
        } else {
            printf("Gomenasai, segitiga tidak dapat dibuat.");
        }
    } else {
        if (a * a + b * b == c * c) {
            printf("Yatta, aku bisa membentuk segitiga!");
        } else {
            printf("Gomenasai, segitiga tidak dapat dibuat.");
        }
    }
    
    return 0;
}