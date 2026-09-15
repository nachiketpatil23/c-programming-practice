// char and its ascii values
#include <stdio.h>
int main()
{
  char ch1 = 'A', ch2 = 'Z';
  char ch3 = 'a', ch4 = 'z';

  printf("The ASCII value of %c to %c is from %d to %d\n", ch1, ch2, ch1, ch2);
  printf("ASCII value 90 to 97 are of the characters = \t");
  printf("%c\t", 90);
  printf("%c\t", 91);
  printf("%c\t", 92);
  printf("%c\t", 93);
  printf("%c\t", 94);
  printf("%c\t", 95);
  printf("%c\t", 96);
  printf("%c\n", 97);
  printf("The ASCII value of %c to %c is from %d to %d\n", ch3, ch4, ch3, ch4);
  printf("ASCII vlaue of \\n is %d\n", '\n');
  printf("ASCII vlaue of 0 ot 9 are form %d to %d\n", '0', '9');
  return 0;
}