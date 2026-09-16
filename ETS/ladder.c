#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int h, w;
        scanf("%d %d", &h, &w);
        
        if (w < 2) {
            printf("Can't make that ladder lah\n");
            continue;
        }
            
        for (int j = 0; j < h; j++) {
            printf(">");
            for (int k = 0; k < w - 2; k++) {
                printf("-");
            }
            printf("<\n");
        }
        
        if (h * 1 != w * 2) {
            printf("Seems good to me\n");
        } else {
            printf("Not structurally sound lah\n"); 
        }
    }
    
    return 0;
}