// pointer arithmaic
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int num1 = 23;
  int *ptr = &num1;
  printf("Befor\n");
  printf("num1 = %d\n", num1);
  printf("&num1 = %u\n", &num1);
  printf("*ptr = %d\n", *ptr);
  printf("ptr = %u\n", ptr);
  printf("&ptr = %u\n", &ptr);

  ptr++;
  *ptr = 47;
  printf("after\n");
  printf("num1 = %d\n", num1);
  printf("&num1 = %u\n", &num1);
  printf("*ptr = %d\n", *ptr);
  printf("ptr = %u\n", ptr);
  printf("*ptr = %u\n", *ptr);
  printf("&ptr = %u\n", &ptr);

  char ch = 'A';
  char *ptr1 = &ch;
  printf("ch = %c\n", ch);
  printf("ptr1 = %u\n", ptr1); // 200
  ptr1++;
  printf("ptr1 = %u\n", ptr1); // 201
  printf("ch = %c\n", ch);
  return 0;

  return 0;
}