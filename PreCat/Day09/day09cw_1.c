// Pointer
//  pointer is a variable which stores the address of another variable
#include <stdio.h>
int main()
{
  int num1 = 23;
  // int ptr  -> this is also a variabel
  int *ptr = &num1; // this is pointer ptr

  printf("num1 = %d\n", num1);
  printf("&num1 = %d\n", &num1);
  printf("ptr = %d\n", ptr);
  printf("&ptr = %d\n", &ptr);
  return 0;
}