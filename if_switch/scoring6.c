#include <stdio.h>

int main() {

    char desired_grade;
    float min_average;
    float current_average;
    float final_weight;
    float final_score;
    
    printf("Enter desired grade> ");
    scanf(" %c", &desired_grade);
    
    printf("Enter minimum average required> ");
    scanf("%f", &min_average);
    
    printf("Enter current average in course> ");
    scanf("%f", &current_average);
    
    printf("Enter how much the final counts\n");
    printf("as a percentage of the course grade> ");
    scanf("%f", &final_weight);
    
    // Menghitung nilai final yang dibutuhkan
    final_score = (min_average - (current_average * (100 - final_weight) / 100)) * (100 / final_weight);
    
    printf("\nYou need a score of %.2f on the final to get a %c.\n", final_score, desired_grade);
    
    return 0;
}