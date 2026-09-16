#include <stdio.h>

int main() {
    float volume_ml;   
    float minutes;    
    

    printf("Enter the quantity of fluid in the bag (ml): ");
    scanf("%f", &volume_ml);
    
    printf("Enter the number of minutes over which it should be infused: ");
    scanf("%f", &minutes);
    
  
    float vtbi = volume_ml;
    
    // hitung infusion rate
    float infusion_rate = (volume_ml / minutes) * 60;
    

    printf("--- I.V. Medication Label Information ---\n");
    printf("VTBI (Volume To Be Infused): %.2f ml\n", vtbi);
    printf("Infusion rate: %.2f ml/hr\n", infusion_rate);
    
    return 0;
}