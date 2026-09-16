#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    float hasil;

    
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &num1);
    
    
    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    
   
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &num2);

   
    if (operator == '+') {
        hasil = num1 + num2;
        printf("Hasil: %.0f\n", hasil);
    }
    else if (operator == '-') {
        hasil = num1 - num2;
        printf("Hasil: %.0f\n", hasil);
    }
    else if (operator == '*') {
        hasil = num1 * num2;
        printf("Hasil: %.0f\n", hasil);
    }
    else if (operator == '/') {
        if (num2 == 0) {
            printf("Error: Pembagian oleh nol!\n");
        } else {
            hasil = (float)num1 / num2; 
            printf("Hasil: %.2f\n", hasil);
        }
    }
    else {
        printf("Error: Operator tidak valid!\n");
    }

    return 0;
}