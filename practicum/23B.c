#include <stdio.h>
#include <string.h>

int main() {
    char kurung[1001];
    int balance = 0;
    int valid = 1;

    scanf("%s", kurung);

    int panjang = strlen(kurung);

    for (int i = 0; i < panjang; i++) {
        if (kurung[i] == '(') {
            balance++;
        } else if (kurung[i] == ')') {
            balance--;
            if (balance < 0) {
                valid = 0;
                break;
            }
        }
    }

    if (balance != 0) {
        valid = 0;
    }


    if (valid) {
        printf("Y");
    } else {
        printf("G");
    }

    return 0;
}