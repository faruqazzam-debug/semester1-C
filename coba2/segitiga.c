#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan panjang sisi pertama: ");
    scanf("%d", &a);
    printf("Masukkan panjang sisi kedua: ");
    scanf("%d", &b);
    printf("Masukkan panjang sisi ketiga: ");
    scanf("%d", &c);

    if  (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Segitiga sama sisi\n");
        } else if (a == b || b == c || a == c) {
            printf("Segitiga sama kaki\n");
        } else {
            printf("Segitiga sembarang\n");
        }
    } else {
        printf("Bukan segitiga\n");
    }

    return 0;
}