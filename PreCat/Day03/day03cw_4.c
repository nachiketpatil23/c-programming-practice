// Width Specifier
#include <stdio.h>
int main()
{
  int num1 = 25;
  printf("num1 = %5d\n", num1); //---25 output is right justified
  printf("num1 = %-5d", num1);  // 25---
  printf("Hi\n");

  float fvar = 3.5f;
  printf("fvar = %6.3f\n", fvar); //-3.500
  printf("fvar = %-6.3f", fvar);  // 3.500-
  printf("bye\n");

  return 0;

  //  11 22 33 44 55  array printing
}
