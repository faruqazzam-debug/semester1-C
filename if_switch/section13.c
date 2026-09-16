#include <stdio.h>

int main() {
    
    int jumlah_mahasiswa;
    int jumlah_section;
    int sisa_mahasiswa;
    
    printf("Enter the number of students enrolled: ");
    scanf("%d", &jumlah_mahasiswa);
    
    // Menghitung jumlah section
    jumlah_section = jumlah_mahasiswa / 30;
    
    // Menghitung sisa mahasiswa
    sisa_mahasiswa = jumlah_mahasiswa % 30;
    
    // Menampilkan hasil
    printf("Number of students enrolled: %d\n", jumlah_mahasiswa);
    printf("Number of sections required: %d\n", jumlah_section);
    printf("Number of students left over: %d\n", sisa_mahasiswa);
    
    return 0;
}