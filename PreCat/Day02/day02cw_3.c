// scanf
#include <stdio.h>
int main()
{
  int num1 = 23;
  int num2;
  printf("Num1 is %d, Enter num2 = \n", num1);
  scanf("%d", &num2);
  int sum = num1 + num2;
  printf("Sum of %d + %d = %d\n", num1, num2, sum);
  return 0;
}