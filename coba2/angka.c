#include <stdio.h>

int main () {
    int bilangan;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("%d positif genap.\n", bilangan);
        } else {
            printf("%d positif ganjil.\n", bilangan);
        }
    } else if (bilangan < 0) {
        if (bilangan % 2 == 0) {
            printf("%d negatif genap.\n", bilangan);
        } else {
            printf("%d negatif ganjil.\n", bilangan);
        }
     } else {
            printf ("Nol\n");
        }

    return 0;
}