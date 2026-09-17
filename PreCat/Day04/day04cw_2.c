// /*Relational Opearators: <  >  <=  >=   ==  !=
//  Binary operators
// operator return 0(false) or 1(true) */

#include <stdio.h>
int main()
{
  printf("Hello World\n1 -> true , 0 -> false\n");

  int num1 = 23;
  int num2 = 47;

  printf("< : %d < %d = %d\n", num1, num2, num1 < num2);
  printf("> : %d > %d = %d\n", num1, num2, num1 > num2);
  printf("<= : %d <= %d = %d\n", num1, num2, num1 <= num2);
  printf(">= : %d >= %d = %d\n", num1, num2, num1 >= num2);
  printf("== : %d == %d = %d\n", num1, num2, num1 == num2);
  printf("!= : %d != %d = %d\n", num1, num2, num1 != num2);

  return 0;
}