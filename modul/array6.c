#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101], result[101];
    int j = 0, capitalizeNext = 0;

    scanf("%[^\n]", s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '_') {
            capitalizeNext = 1;
        } else {
            if (j == 0) {
                result[j++] = tolower(s[i]);
            } else {
                if (capitalizeNext) {
                    result[j++] = toupper(s[i]);
                    capitalizeNext = 0;
                } else {
                    result[j++] = tolower(s[i]);
                }
            }
        }
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
