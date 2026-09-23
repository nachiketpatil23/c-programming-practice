// Changing the state of the variable using pointer
#include <stdio.h>
int main()
{
  int num1 = 23;
  int *ptr = &num1;

  printf("num1 = %d\n", num1);
  printf("&num1 = %d\n", &num1);
  printf("ptr = %d\n", ptr);
  printf("&ptr = %d\n", &ptr);
  printf("*ptr = %d\n", *ptr);

  *ptr = 47;
  printf("After changeing form value at * \n");
  printf("*ptr = %d\n", *ptr);
  printf("num1 = %d\n", num1);
  return 0;
}