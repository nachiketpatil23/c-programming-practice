// &arr , &arr+1
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int arr[5] = {11, 22, 33, 44, 55};
  printf("arr = %d\n", arr);   // 100
  printf("&arr = %d\n", &arr); // 100

  printf("After\n");
  printf("arr+1 = %d\n", arr + 1);
  printf("&arr+1 = %d\n", &arr + 1);

  // arr is a base address and if we do arr + 0, arr + 1 it gose to ist continues next address
  // &arr is also a base address but it we do &arr + 1 it goes to next adress it cover hole arrays loction in one go
  return 0;
}