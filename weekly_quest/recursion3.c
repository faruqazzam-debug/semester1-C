#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]); 
    }

    int max = A[0];
    int min = A[0];


    for (int i = 1; i < n; i++) {
        if (A[i] > max)
            max = A[i];
        if (A[i] < min)
            min = A[i];
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}