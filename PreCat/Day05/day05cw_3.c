// Conditional statements: if else

#include <stdio.h>
int main()
{
  printf("Hello!\n");

  int num1, num2;
  printf("Enter num1 and num2 =\n");
  scanf("%d%d", &num1, &num2);
  if (num1 > num2)
  {
    printf("%d is gretaer than %d\n", num1, num2);
  }
  else
  {
    printf("%d is gretaer than %d\n", num2, num1);
  }
  return 0;
}