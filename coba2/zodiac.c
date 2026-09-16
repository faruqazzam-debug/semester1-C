#include <stdio.h>

int main(){

   int bulan;
   int tanggal;

    printf("Masukkan tanggal lahir (1-31): ");
    scanf("%d", &tanggal);

    printf("Masukkan bulan lahir (1-12): ");
    scanf("%d", &bulan);

    if (bulan == 1){
        if (tanggal <= 19){
            printf("Capricorn\n");
        } else {
            printf("Aquarius\n");
        }
    } else if (bulan == 2){
        if (tanggal <= 18){
            printf("Aquarius\n");
        } else {
            printf("Pisces\n");
        }
    } else if (bulan == 3){
        if (tanggal <= 20){
            printf("Pisces\n");
        } else {
            printf("Aries\n");
        }
    } else if (bulan == 4){
        if (tanggal <= 19){
            printf("Aries\n");
        } else {
            printf("Taurus\n");
        }
    } else if (bulan == 5){
        if (tanggal <= 20){
            printf("Taurus\n");
        } else {
            printf("Gemini\n");
        }
    } else if (bulan == 6){
        if (tanggal <= 20){
            printf("Gemini\n");
        } else {
            printf("Cancer\n");
        }
    } else if (bulan == 7){
        if (tanggal <= 22){
            printf("Cancer\n");
        } else {
            printf("Leo\n");
        }
    } else if (bulan == 8){
        if (tanggal <= 22){
            printf("Leo\n");
        } else {
            printf("Virgo\n");
        }
    } else if (bulan == 9){
        if (tanggal <= 22){
            printf("Virgo\n");
        } else {
            printf("Libra\n");
        }
    } else if (bulan == 10){
        if (tanggal <= 22){
            printf("Libra\n");
        } else {
            printf("Scorpio\n");
        }
    } else if (bulan == 11){
        if (tanggal <= 21){
            printf("Scorpio\n");
        } else {
            printf("Sagittarius\n");
        }
    } else if (bulan == 12){
        if (tanggal <= 21){
            printf("Sagittarius\n");
        } else {
            printf("Capricorn\n");
        }
    }
    return 0;
}