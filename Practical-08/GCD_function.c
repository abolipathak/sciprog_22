#include<stdio.h>
int gcd(int a, int b);

int main()
{
  int number1, number2;

  printf("Enter two numbers : ");
  scanf("%d %d",&number1, &number2);

  int result = gcd(number1, number2);
  printf("The GCD of %d and %d = %d", number1, number2, result);

  return 0;
}

// User-defined function to find gcd of two numbers
int gcd(int a, int b)
{
  int hcf;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}