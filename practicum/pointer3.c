#include <stdio.h>

void magician(long long *a1, long long *a2, int x, long long *result) {
    if (x == 1) {
        *result = *a1;
        return;
    }
    if (x == 2) {
        *result = *a2;
        return;
    }
    long long r = *a1;
    long long s = *a2;
    long long t;
    for (int i = 3; i <= x; i++) {
        t = r + s;
        r = s;
        s = t;
    }
    *result = s;
}

int main() {
    int u;
    scanf("%d", &u);
    for (int i = 0; i < u; i++) {
        long long a1, a2, result;
        int x;
        scanf("%lld %lld %d", &a1, &a2, &x);
        magician(&a1, &a2, x, &result);
        printf("%lld\n", result);
    }
    return 0;
}