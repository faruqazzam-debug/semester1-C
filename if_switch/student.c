#include <stdio.h>

int main() {
    int students_enrolled; 
    int sections_needed;    
    int students_leftover; 
    
    printf("Enter the number of students enrolled: ");
    scanf("%d", &students_enrolled);
    

    printf("Number of students enrolled: %d\n", students_enrolled);
    
    // Menghitung jumlah section yang dibutuhkan
    sections_needed = students_enrolled / 30; 
    

    students_leftover = students_enrolled % 30;  // Modulo
    

    printf("Number of sections required: %d\n", sections_needed);
    printf("Number of students left over: %d\n", students_leftover);
    
    return 0;
}