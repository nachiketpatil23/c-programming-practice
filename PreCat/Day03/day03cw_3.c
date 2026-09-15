// Types of errors : Compiler, Linker, Runtime, Logical Errors
#include <stdio.h>
int main()
{
  printf("Good morning\n"); // if ; is missing compiler give error
  // Printf("Wake up\n"); // If Printf  linker will give error

  // int num1 = 10/0;
  // printf("num1 = %d\n",num1);// Run time error
  // printf("hello\n");

  int num2 = 20;
  int num3 = 10;
  int sum = num2 - num3; // logical error
  printf("sum = %d\n", sum);
  return 0;
}