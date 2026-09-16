#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    int ratusan = num / 100;
    int puluhan = (num % 100) / 10;
    int satuan  = num % 10;

    // int jumlah = (ratusan*ratusan*ratusan) +
    //              (puluhan*puluhan*puluhan) +
    //              (satuan*satuan*satuan);

    if (ratusan*ratusan*ratusan + puluhan*puluhan*puluhan + satuan*satuan*satuan == num || ( ratusan == 0 && puluhan == 0)) {
        printf("Merupakan Bilangan Armstrong\n");
    } else {
        printf("Bukan Merupakan Bilangan Armstrong\n");
    }

    return 0;
}
