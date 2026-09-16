#include <stdio.h>

int main() {
    int I1, I2, I3, I4;
    int angka;

    scanf("%d %d %d %d", &I1, &I2, &I3, &I4);


    angka = I1 * 8 + I2 * 4 + I3 * 2 + I4 * 1;

    switch (angka) {
        case 0: printf("1 1 1 1 1 1 0"); break;
        case 1: printf("0 1 1 0 0 0 0"); break;
        case 2: printf("1 1 0 1 1 0 1"); break;
        case 3: printf("1 1 1 1 0 0 1"); break;
        case 4: printf("0 1 1 0 0 1 1"); break;
        case 5: printf("1 0 1 1 0 1 1"); break;
        case 6: printf("1 0 1 1 1 1 1"); break;
        case 7: printf("1 1 1 0 0 0 0"); break;
        case 8: printf("1 1 1 1 1 1 1"); break;
        case 9: printf("1 1 1 1 0 1 1"); break;
        default: printf("0 0 0 0 0 0 0"); break;

       }   
    return 0;
}