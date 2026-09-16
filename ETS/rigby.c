#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[101];
    int vowel = 0, consonant = 0, uppercase = 0, lowercase = 0;
    
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = '\0';
    
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        
        
        if (isalpha(ch)) {
            
            char lowerCh = tolower(ch);
            
            
            if (lowerCh == 'a' || lowerCh == 'i' || lowerCh == 'u' || 
                lowerCh == 'e' || lowerCh == 'o') {
                vowel++;
            } else {
                consonant++;
            }
            
            
            if (isupper(ch)) {
                uppercase++;
            } else {
                lowercase++;
            }
        }
    }
    
    printf("Vowel Number: %d\n", vowel);
    printf("Number Of Consonants: %d\n", consonant);
    printf("Total Uppercase: %d\n", uppercase);
    printf("Total Lowercase: %d\n", lowercase);
    
    return 0;
}