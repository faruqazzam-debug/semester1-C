#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[100][100]; 
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int total_rotations = 0;
    char command[10];
    
    
    while (1) {
        scanf("%s", command);
        if (strcmp(command, "rotate") == 0) {
            int x;
            scanf("%d", &x);
            total_rotations = (total_rotations + x) % 4;
        } else if (strcmp(command, "quit") == 0) {
            break;
        }
    }
    
    
    if (total_rotations == 0) {
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", matrix[i][j]);
                if (j < n - 1) printf(" ");
            }
            printf("\n");
        }
    } 
    else if (total_rotations == 1) {
        
        for (int j = 0; j < n; j++) {
            for (int i = n - 1; i >= 0; i--) {
                printf("%d", matrix[i][j]);
                if (i > 0) printf(" ");
            }
            printf("\n");
        }
    }
    else if (total_rotations == 2) {
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                printf("%d", matrix[i][j]);
                if (j > 0) printf(" ");
            }
            printf("\n");
        }
    }
    else if (total_rotations == 3) {
        
        for (int j = n - 1; j >= 0; j--) {
            for (int i = 0; i < n; i++) {
                printf("%d", matrix[i][j]);
                if (i < n - 1) printf(" ");
            }
            printf("\n");
        }
    }
    
    return 0;
}