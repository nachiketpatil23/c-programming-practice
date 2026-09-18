// Bitwise left shift and right shift: <<   >>

#include <stdio.h>
int main()
{
  printf("Hello!\n");

  int num1 = 10;
  int num2 = 2;

  printf("left shift for %d << %d = %d\n", num1, num2, num1 << num2);
  printf("right shift for %d >> %d = %d\n", num1, num2, num1 >> num2);

  return 0;
}