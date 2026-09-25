
// Loops: While loop
// Entry control loops
//      * while loop
//      * for loop
// Exit control loops
//      * do while loop

// #include<stdio.h>
// int main(){
//     int i = 1; // loop variable initialization
//     while(i<=10){// condition check
//         printf("%d\n",i); // execute the instruction
//         i++;// modification
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
  int num1;
  printf("enter the num1\n");
  scanf("%d", &num1);

  int i = 1;
  while (i <= 10)
  {
    printf("%d * %d = %d\n", num1, i, num1 * i); // 5*1=5
    i++;
  }
  return 0;
}
