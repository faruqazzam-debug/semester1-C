#include <stdio.h>

int main() {
    int umur;

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);
   
    if (umur < 0) {
        printf("Umur tidak valid.\n");
    } else if (umur >= 0 && umur <= 5) {
        printf("Balita\n");
    } else if (umur >= 6 && umur <= 12) {
        printf("Anak Anak\n");
    } else if (umur >=13 && umur <=17) {
        printf("Remaja\n");
    } else if (umur >=18 && umur <= 55) {
        printf("Dewasa\n");
    } else { (umur > 55);
        printf("Anda adalah seorang lansia.\n");
    }
}