// Switch Case

#include <stdio.h>
int main()
{

  int num1, num2, choice;
  printf("enter the values of num1 and num2 = \n");
  scanf("%d%d", &num1, &num2);
  printf("1 -> Add\n2 -> Sub\n3 -> Mul\n4 -> Div\n");
  printf("Enter Your Choice = \n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Add = %d", num1 + num2);
    break;
  case 2:
    printf("sub = %d", num1 - num2);
    break;
  case 3:
    printf("mul = %d", num1 * num2);
    break;
  case 4:
    printf("div = %d", num1 / num2);
    break;
  default:
    printf("Invalid choice...\n");
  }
  return 0;
}