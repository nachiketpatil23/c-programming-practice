// Function parameter execution
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int num1 = 23;
  int num2 = 47;
  int *ptr = &num1;
  printf("num1 = %d num2 = %d\n", num1, num2);     // 23 , 47
  printf("num1 = %d ++*ptr = %d\n", num1, ++*ptr); // 24 , 24 because on printf is a fucntion and its execution is done form right to left
  return 0;
}