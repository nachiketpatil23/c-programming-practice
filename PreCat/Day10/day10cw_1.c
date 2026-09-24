// pointer to pointer
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int num1 = 23;
  int *ptr = &num1;
  int **p_ptr = &ptr;
  printf("num1 = %d\n", num1);
  printf("&num1 = %u\n", &num1);
  printf("*ptr = %d\n", *ptr);
  printf("ptr = %u\n", ptr);
  printf("&ptr = %u\n", &ptr);
  printf("**p_ptr = %d\n", **p_ptr);
  printf("*p_ptr = %u\n", *p_ptr);
  printf("p_ptr = %u\n", p_ptr);
  printf("&p_ptr = %u\n", &p_ptr);
  return 0;
}