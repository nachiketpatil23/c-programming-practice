// do while with switch case
// Switch Case

#include <stdio.h>
int main()
{

  int num1, num2, choice;

  printf("enter the values of num1 and num2 = \n");
  scanf("%d%d", &num1, &num2);
  do
  {
    printf("0 -> exit\n1 -> Add\n2 -> Sub\n3 -> Mul\n4 -> Div\n");
    printf("Enter Your Choice = \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
      printf("Thank For Coming!\n");
      break;
    case 1:
      printf("Add = %d\n", num1 + num2);
      break;
    case 2:
      printf("sub = %d\n", num1 - num2);
      break;
    case 3:
      printf("mul = %d\n", num1 * num2);
      break;
    case 4:
      printf("div = %d\n", num1 / num2);
      break;
    default:
      printf("Invalid choice...\n");
    }
  } while (choice != 0);
  return 0;
}