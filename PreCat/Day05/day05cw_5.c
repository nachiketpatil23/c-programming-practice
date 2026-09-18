// Nestesd if-else

#include <stdio.h>
int main()
{
  printf("Hello World!\n");
  int num1, num2, num3;
  printf("Enter num1, num2, num3 = \n");
  scanf("%d%d%d", &num1, &num2, &num3);
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      printf("num1 is greatest\n");
    }
    else
      printf("num3 is greatest\n");
  }
  else
  {
    if (num2 > num3)
    {
      printf("num2 is greatest\n");
    }
    else
    {
      printf("num3 is greatest\n");
    }
  }
  return 0;
}