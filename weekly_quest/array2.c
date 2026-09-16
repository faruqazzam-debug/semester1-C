#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sizes[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &sizes[i]);
    }
    
    
    for (int field = 0; field < n; field++) {
        int x = sizes[field];
        
        
        printf("+");
        for (int j = 0; j < x; j++) {
            printf("---");
        }
        printf("+\n");
        
        
        for (int i = 0; i < x; i++) {
            printf("|");
            for (int j = 0; j < x; j++) {
                
                if ((i + j) % 2 == 0) {
                    printf(" v ");
                } else {
                    printf(" . ");
                }
            }
            printf("|\n");
        }
        
        
        printf("+");
        for (int j = 0; j < x; j++) {
            printf("---");
        }
        printf("+\n");
    }
    
    return 0;
}