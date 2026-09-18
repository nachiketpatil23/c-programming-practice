// Terneary operator/ conditional operator
// condition ? exp1 true: exp2 false

#include <stdio.h>
int main()
{
  printf("Hello!\n");
  int num1 = 10, num2 = 20;
  printf(num1 > num2 ? "num1 is gretaer\n" : "num2 is greater\n");

  int max = num2 > num1 ? num2 : num1;
  printf("max = %d\n", max);
  return 0;
}