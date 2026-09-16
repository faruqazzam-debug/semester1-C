#include <stdio.h>

int main() {
    int M, N;
    
    // Membaca dimensi matriks
    scanf("%d %d", &M, &N);
    
    int matrix[M][N];
    int sum = 0;
    
    // Membaca elemen matriks dan menghitung jumlahnya
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    
    // Mencetak hasil
    printf("%d\n", sum);
    
    return 0;
}