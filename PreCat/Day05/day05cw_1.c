// Bitwise Operator:  &  | ^  ~
#include <stdio.h>
int main()
{
  printf("Hello Wolrd!\n");

  int num1 = 23;
  int num2 = 47;

  printf("%d & %d = %d\n", num1, num2, num1 & num2);
  printf("%d | %d = %d\n", num1, num2, num1 | num2);
  printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
  printf("~num1 =  %d\n", ~num1);

  return 0;
}