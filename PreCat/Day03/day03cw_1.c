// Value out of range
#include <stdio.h>
int main()
{
  char ch1 = 'A', ch2 = 'B';
  unsigned char sum = 'A' + 'B'; // 65 + 66 = 131
  // signed char = -128 to 127
  char signedd = 'A' + 'B';
  printf("Signed case = %d\n", signedd);

  printf("sum = %d\n", sum);

  unsigned char ch3 = 500;
  printf("ch3 = %d\n", ch3);
}