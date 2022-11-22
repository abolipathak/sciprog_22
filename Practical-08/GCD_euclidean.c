/* GCD of two numbers using Euclid's algorithm*/
#include <stdio.h>

int gcd(int a, int b);
int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}

//function that returns the Greatest Common Divisor
int gcd(a, b) {
  int R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}