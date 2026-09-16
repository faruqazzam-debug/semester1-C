#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int A = 0, I = 0, U = 0, E = 0, O = 0;

    fgets(S, sizeof(S), stdin);

    for (int i = 0; i < strlen(S); i++) {
        char character = S[i];
        if (character == 'A' || character == 'a') A++;
        else if (character == 'I' || character == 'i') I++;
        else if (character == 'U' || character == 'u') U++;
        else if (character == 'E' || character == 'e') E++;
        else if (character == 'O' || character == 'o') O++;
    }

    printf("A/a : %d\n", A);
    printf("I/i : %d\n", I);
    printf("U/u : %d\n", U);
    printf("E/e : %d\n", E);
    printf("O/o : %d\n", O);

    return 0;
}
