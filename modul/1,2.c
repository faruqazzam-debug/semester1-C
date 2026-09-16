#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 999) {
        printf("Input harus 0 sampai 999\n");
    } 
    else if (n == 0) {
        printf("Nol");
    } 
    else if (n < 10) { // 1 - 9
        switch (n) {
            case 1: printf("Satu"); break;
            case 2: printf("Dua"); break;
            case 3: printf("Tiga"); break;
            case 4: printf("Empat"); break;
            case 5: printf("Lima"); break;
            case 6: printf("Enam"); break;
            case 7: printf("Tujuh"); break;
            case 8: printf("Delapan"); break;
            case 9: printf("Sembilan"); break;
        }
    } 
    else if (n == 10) {
        printf("Sepuluh");
    } 
    else if (n == 11) {
        printf("Sebelas");
    } 
    else if (n < 20) { // 12 - 19
        switch (n % 10) {
            case 2: printf("Dua Belas"); break;
            case 3: printf("Tiga Belas"); break;
            case 4: printf("Empat Belas"); break;
            case 5: printf("Lima Belas"); break;
            case 6: printf("Enam Belas"); break;
            case 7: printf("Tujuh Belas"); break;
            case 8: printf("Delapan Belas"); break;
            case 9: printf("Sembilan Belas"); break;
        }
    } 
    else if (n < 100) { // 20 - 99
        int puluh = n / 10;
        int satuan = n % 10;

        switch (puluh) {
            case 2: printf("Dua Puluh"); break;
            case 3: printf("Tiga Puluh"); break;
            case 4: printf("Empat Puluh"); break;
            case 5: printf("Lima Puluh"); break;
            case 6: printf("Enam Puluh"); break;
            case 7: printf("Tujuh Puluh"); break;
            case 8: printf("Delapan Puluh"); break;
            case 9: printf("Sembilan Puluh"); break;
        }

        if (satuan != 0) {
            printf(" ");
            switch (satuan) {
                case 1: printf("Satu"); break;
                case 2: printf("Dua"); break;
                case 3: printf("Tiga"); break;
                case 4: printf("Empat"); break;
                case 5: printf("Lima"); break;
                case 6: printf("Enam"); break;
                case 7: printf("Tujuh"); break;
                case 8: printf("Delapan"); break;
                case 9: printf("Sembilan"); break;
            }
        }
    } 
    else if (n == 100) {
        printf("Seratus");
    } 
    else if (n < 200) { // 101 - 199
        printf("Seratus");
        int sisa = n % 100;
        if (sisa != 0) {
            printf(" ");
            // ulangin logika 1-99
            if (sisa < 10) {
                switch (sisa) {
                    case 1: printf("Satu"); break;
                    case 2: printf("Dua"); break;
                    case 3: printf("Tiga"); break;
                    case 4: printf("Empat"); break;
                    case 5: printf("Lima"); break;
                    case 6: printf("Enam"); break;
                    case 7: printf("Tujuh"); break;
                    case 8: printf("Delapan"); break;
                    case 9: printf("Sembilan"); break;
                }
            } else if (sisa == 10) {
                printf("Sepuluh");
            } else if (sisa == 11) {
                printf("Sebelas");
            } else if (sisa < 20) {
                switch (sisa % 10) {
                    case 2: printf("Dua Belas"); break;
                    case 3: printf("Tiga Belas"); break;
                    case 4: printf("Empat Belas"); break;
                    case 5: printf("Lima Belas"); break;
                    case 6: printf("Enam Belas"); break;
                    case 7: printf("Tujuh Belas"); break;
                    case 8: printf("Delapan Belas"); break;
                    case 9: printf("Sembilan Belas"); break;
                }
            } else {
                int puluh = sisa / 10;
                int satuan = sisa % 10;

                switch (puluh) {
                    case 2: printf("Dua Puluh"); break;
                    case 3: printf("Tiga Puluh"); break;
                    case 4: printf("Empat Puluh"); break;
                    case 5: printf("Lima Puluh"); break;
                    case 6: printf("Enam Puluh"); break;
                    case 7: printf("Tujuh Puluh"); break;
                    case 8: printf("Delapan Puluh"); break;
                    case 9: printf("Sembilan Puluh"); break;
                }
                if (satuan != 0) {
                    printf(" ");
                    switch (satuan) {
                        case 1: printf("Satu"); break;
                        case 2: printf("Dua"); break;
                        case 3: printf("Tiga"); break;
                        case 4: printf("Empat"); break;
                        case 5: printf("Lima"); break;
                        case 6: printf("Enam"); break;
                        case 7: printf("Tujuh"); break;
                        case 8: printf("Delapan"); break;
                        case 9: printf("Sembilan"); break;
                    }
                }
            }
        }
    } 
    else if (n < 1000) { // 200 - 999
        int ratus = n / 100;
        int sisa = n % 100;

        switch (ratus) {
            case 2: printf("Dua Ratus"); break;
            case 3: printf("Tiga Ratus"); break;
            case 4: printf("Empat Ratus"); break;
            case 5: printf("Lima Ratus"); break;
            case 6: printf("Enam Ratus"); break;
            case 7: printf("Tujuh Ratus"); break;
            case 8: printf("Delapan Ratus"); break;
            case 9: printf("Sembilan Ratus"); break;
        }

        if (sisa != 0) {
            printf(" ");
            // ulangin logika 1-99 (kayak di atas)
            if (sisa < 10) {
                switch (sisa) {
                    case 1: printf("Satu"); break;
                    case 2: printf("Dua"); break;
                    case 3: printf("Tiga"); break;
                    case 4: printf("Empat"); break;
                    case 5: printf("Lima"); break;
                    case 6: printf("Enam"); break;
                    case 7: printf("Tujuh"); break;
                    case 8: printf("Delapan"); break;
                    case 9: printf("Sembilan"); break;
                }
            } else if (sisa == 10) {
                printf("Sepuluh");
            } else if (sisa == 11) {
                printf("Sebelas");
            } else if (sisa < 20) {
                switch (sisa % 10) {
                    case 2: printf("Dua Belas"); break;
                    case 3: printf("Tiga Belas"); break;
                    case 4: printf("Empat Belas"); break;
                    case 5: printf("Lima Belas"); break;
                    case 6: printf("Enam Belas"); break;
                    case 7: printf("Tujuh Belas"); break;
                    case 8: printf("Delapan Belas"); break;
                    case 9: printf("Sembilan Belas"); break;
                }
            } else {
                int puluh = sisa / 10;
                int satuan = sisa % 10;

                switch (puluh) {
                    case 2: printf("Dua Puluh"); break;
                    case 3: printf("Tiga Puluh"); break;
                    case 4: printf("Empat Puluh"); break;
                    case 5: printf("Lima Puluh"); break;
                    case 6: printf("Enam Puluh"); break;
                    case 7: printf("Tujuh Puluh"); break;
                    case 8: printf("Delapan Puluh"); break;
                    case 9: printf("Sembilan Puluh"); break;
                }
                if (satuan != 0) {
                    printf(" ");
                    switch (satuan) {
                        case 1: printf("Satu"); break;
                        case 2: printf("Dua"); break;
                        case 3: printf("Tiga"); break;
                        case 4: printf("Empat"); break;
                        case 5: printf("Lima"); break;
                        case 6: printf("Enam"); break;
                        case 7: printf("Tujuh"); break;
                        case 8: printf("Delapan"); break;
                        case 9: printf("Sembilan"); break;
                    }
                }
            }
        }
    }

return 0;
}