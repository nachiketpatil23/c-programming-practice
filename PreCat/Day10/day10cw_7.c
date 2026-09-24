// Array with pointer notation
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int arr[5] = {23, 47, 07, 11, 18};
  printf("int[0] = %d\n", arr[0]);       // 23
  printf("*(arr+0) = %d\n", *(arr + 0)); // 23

  printf("int[3] = %d\n", arr[3]);       // 11
  printf("*(arr+3) = %d\n", *(arr + 3)); // 11

  for (int i = 0; i < 5; i++)
  {
    printf("%4d", *(arr + i));
  }
  return 0;
}