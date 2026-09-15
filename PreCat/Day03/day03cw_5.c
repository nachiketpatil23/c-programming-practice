// Typecasting : Upcasting and downcasting
#include <stdio.h>
int main()
{
  // float fvar = 5/3;
  // printf("fvar = %.2f\n",fvar); //expected =  1.66 but it is 1.00

  float fvar = (float)5 / 3;     // 5.0/3.0
  printf("fvar = %.2f\n", fvar); // 1.67

  int num1 = 3.5;
  printf("num1 = %d\n", num1);

  return 0;
}
