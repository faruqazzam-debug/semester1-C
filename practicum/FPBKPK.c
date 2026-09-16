#include <stdio.h>

long long gcd(long long n, long long m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}

long long lcm(long long n, long long m) {
    return (n * m) / gcd(n, m);
}

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", lcm(n, m));
return 0;
}