// Arithmatic Operators: + -  * / %
// Binary operator
#include <stdio.h>
int main()
{
  int num1 = 20;
  int num2 = 10;
  int res = num1 + num2;
  printf("res =  %d\n", res); // 20 + 10 = 30;
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d * %d = %d\n", num1, num2, num1 * num2);
  printf("%d / %d = %d\n", num1, num2, num1 / num2);
  printf("%d %% %d = %d\n", num1, num2, num1 % num2);
  return 0;
}