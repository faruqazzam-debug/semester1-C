#include <stdio.h>

int main() {
    int n, temp, digit;
    int reversed = 0;
    
    printf("Input: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }
    
    printf("Output: ");
    
    while (reversed > 0) {
        digit = reversed % 10;
        
        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
        
        reversed = reversed / 10;
    }
    
    printf("\n");
    return 0;
}