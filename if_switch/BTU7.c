#include <stdio.h>
int main() {
    const double ENERGI_PER_BARREL = 5800000.0;
    const double GALON_PER_BARREL = 42.0;
    
    double jumlah_galon;
    double efisiensi_persen;
    double energi_total;
    double energi_bermanfaat;
    
    printf("jumlah galon minyak yang dibakar: ");
    scanf("%lf", &jumlah_galon);
    printf("efisiensi furnace (%%): ");
    scanf("%lf", &efisiensi_persen);
    
    double jumlah_barel = jumlah_galon / GALON_PER_BARREL;
    energi_total = jumlah_barel * ENERGI_PER_BARREL;
    
    double efisiensi_desimal = efisiensi_persen / 100.0;
    energi_bermanfaat = energi_total * efisiensi_desimal;
    
    printf("HASIL PERHITUNGAN:\n");
    printf("Energi total minyak: %.1f BTU\n", energi_total);
    printf("Energi bermanfaat : %.1f BTU\n", energi_bermanfaat);
    
    return 0;
}