#include <stdio.h>

double shellvalue(double b, int n) {
  if (n <= 0) {
    return b;
  }


return b + (b / shellvalue(b, n-1));
}

int main() {
  double b;
  int n;
  
  scanf("%lf %lld", &b, &n);
  
  double result = shellvalue (b, n);
  printf("%2lf\n", result);
}