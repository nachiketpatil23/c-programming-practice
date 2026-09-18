// Nested Ternery operator
// condition? exp1 1(true): exp2(false)

#include <stdio.h>
int main()
{
  printf("Hello!\n");
  int num1 = 23, num2 = 47, num3 = 70;
  int max = num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2
                                                                  : num3;
  printf("max = %d\n", max);
  return 0;
}