#include <stdio.h>

int main(){

    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++){
        for (int j = 0 ; j <= i; j++)
        {
            printf("nigga%d", j+1);
        }
        printf("\n");
    };
    return 0;
}