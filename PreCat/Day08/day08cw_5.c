// Recursion
// 5 * 4 * 3 * 2 * 1

#include <stdio.h>
int my_fact(int);
int main()
{
  int n1;
  printf("Enter the value for Factorial = ");
  scanf("%d", &n1);
  int result = my_fact(n1);
  printf("Factorila of %d is %d\n", n1, result);
}

int my_fact(int num1)
{
  if (num1 == 0)
  {
    return 1;
  }
  int result = num1 * my_fact(num1 - 1);
  return result;
}