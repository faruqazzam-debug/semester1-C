#include <stdio.h>
#include <math.h>

long long arit(long long n){
    if(n == 0){
        return 1;
    }
    return pow(n + 1, 2) + arit(n-1);
}
long long main (){
    long long n;
    scanf("%lld", &n);
    printf("%lld", arit(n - 1));

    return 0;
}