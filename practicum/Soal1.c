#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, theta1, x2, y2;
    scanf("%lf %lf %lf %lf %lf", &x1, &y1, &theta1, &x2, &y2);
    if (fabs(x1 - x2) == 0 && fabs(y1 - y2) == 0) {
        printf("Halo, Dan, aku Iel.\n");
        return 0;}
    double theta2 = atan2(y2 - y1, x2 - x1);
    if (fabs(theta1 - theta2) < 0.01) {
        printf("Aku akan berjalan lurus ke Dan!\n");
    } else {
        printf("Aku akan berputar ke arah tujuan!\n");
    }
    return 0;
}