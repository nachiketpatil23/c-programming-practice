// Loops: for loop
// for(step1; step2; step4){
// step 3;
//}

#include <stdio.h>
int main()
{
  int num1 = 10;
  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", num1, i, num1 * i);
  }
  return 0;
}
