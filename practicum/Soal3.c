#include <stdio.h>

int main() {
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    
    if ((a & b) == 0) {
        printf("hop on roblox!");
    } else {
        printf("we'll try again tomorrow :(");
    }
    return 0;
}