// Global variable , Extern(Keyword)
// default value = 0
// storage = Data section
// scope = throughout the program
// life = throughout the program
#include <stdio.h>
int num1;
extern int num2;
int main()
{
  int num1 = 10;
  printf("num1 in main = %d\n", num1); // 0
  fun();
  printf("num2 = %d\n", num2);
}
int num2 = 25;
void fun()
{
  num1 = num1 + 2;
  printf("num1 in fun = %d", num1); // 2
}
