#include <stdio.h>

// Deklarasi fungsi (di luar main)
void printgrade(int nilai);

int main() {
    int nilai;

    printf("Masukkan nilai Anda (0-100): ");
    scanf("%d", &nilai);
    
    // Memanggil fungsi
    printgrade(nilai);
    
    return 0;
}

// Implementasi fungsi (di luar main)
void printgrade(int nilai) {
    if (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid.\n");
    } else if (nilai >= 85) {
        printf("Grade A\n");
    } else if (nilai >= 70) {
        printf("Grade B\n");
    } else if (nilai >= 60) {
        printf("Grade C\n");
    } else if (nilai >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade E\n");
    }
}