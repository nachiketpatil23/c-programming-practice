// Operators: Assignment(binary), comma(special type of operator)
// comma with bracket
#include <stdio.h>
int main()
{
  // int num1 = 25,26,27; // not allowed it gives error beacuse we can assigen only one value
  int num2;
  num2 = 30, 40, 50; // 30 left most value
  printf("num2 = %d\n", num2);
  int num3 = (50, 60, 70); // 70 right most value
  printf("num3 = %d\n", num3);
  return 0;
}