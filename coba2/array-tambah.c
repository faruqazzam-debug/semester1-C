#include <stdio.h>

int main() {
    int M, N;
    
    // Membaca dimensi matriks
    printf("Masukkan jumlah baris dan kolom (M N): ");
    scanf("%d %d", &M, &N);
    
    int matrix[M][N];
    int column_sums[N]; // Array untuk menyimpan jumlah per kolom
    
    // Inisialisasi array column_sums dengan 0
    for (int j = 0; j < N; j++) {
        column_sums[j] = 0;
    }
    
    // Membaca elemen matriks
    printf("Masukkan elemen matriks %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
            column_sums[j] += matrix[i][j]; // Menambah ke jumlah kolom
        }
    }
    
    // Mencetak matriks
    printf("\nMatriks:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Mencetak jumlah per kolom
    printf("\nJumlah per kolom:\n");
    for (int j = 0; j < N; j++) {
        printf("Kolom %d: %d\n", j + 1, column_sums[j]);
    }
    
    // Menghitung dan mencetak total keseluruhan
    int total_sum = 0;
    for (int j = 0; j < N; j++) {
        total_sum += column_sums[j];
    }
    printf("\nTotal keseluruhan: %d\n", total_sum);
    
    return 0;
}