// Switch Case
#include <stdio.h>
int main()
{
  printf("Hello!\n");
  int num1, num2, choice;
  printf("Enter num1 and num2 = \n");
  scanf("%d%d", &num1, &num2);

  printf("1 -> Addition\n2 -> Subtratcion\n3 -> Multiplication\n4 -> Division\n");

  printf("Enter the opration no = \n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Addition = %d\n", num1 + num2);
    break;
  case 2:
    printf("Subtraticon = %d\n", num1 - num2);
    break;
  case 3:
    printf("Multiplication = %d\n", num1 * num2);
    break;
  case 4:
    printf("Division = %d\n", num1 / num2);
    break;
  default:
    printf("Invalid Opration number");
  }
  return 0;
}