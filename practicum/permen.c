#include <stdio.h>

long long comb(int n, int k) {

    if (k == 0 || k == n) return 1;
    if (k < 0 || k > n) return 0;
    
    return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
    int N, K;
    
    scanf("%d %d", &N, &K);
    
    if (N < K) {
        printf("No fair way to share the candies tonight... A truly spooky Halloween!\n");
        return 0;
    }
    
    long long ways = comb(N - 1, K - 1);
    
    if (ways % 2 == 1) {
        printf("There are %lld ways to share the candies, A magical Halloween night!\n", ways);
    } else {
        printf("There are %lld ways to share the candies, A spooky Halloween night!\n", ways);
    }
    
    return 0;
}