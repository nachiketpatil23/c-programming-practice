// Short hand operators: +=  -=  *=  /=   %=
// Binary operator

#include <stdio.h>
int main()
{
  printf("Hello world\n");
  int num1 = 23;
  int num2 = 10;

  printf("vales of num1 = %d and num2 = %d before operation!\n", num1, num2);
  num1 += num2;
  printf("vales of num1 = %d and num2 = %d after operation!\n", num1, num2);

  num1 -= num2;
  printf("num1 = %d and num2 = %d\n", num1, num2);

  num1 *= num2;
  printf("num1 = %d and num2 = %d\n", num1, num2);

  num1 %= num2;
  printf("num1 = %d and num2 = %d\n", num1, num2);

  // these are not short hand operators
  num1 = 20, num2 = 10;
  num1 = +num2; // num1 = +num2, num1 = 10, num2 = 10
  printf(" num1 = %d num2 = %d\n", num1, num2);

  num1 = -num2; //  num1 = -num2, num1 = -10 , num2 = 10
  printf(" num1 = %d num2 = %d\n", num1, num2);

  // num1 =* num2 error

  return 0;
}