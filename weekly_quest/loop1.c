#include <stdio.h>

int main() {
    int n;
    
    printf("Input: ");
    scanf("%d", &n);
    
    printf("Output:\n");
    for(int i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("%d\n", cube);
    }
    
    return 0;
}