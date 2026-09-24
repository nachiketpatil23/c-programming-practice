// Arrays basic declration,initialization,Printing
#include <stdio.h>
int main()
{
  printf("Hello World!\n");

  int arr[5]; // declaration
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;

  int arr2[7] = {1, 2, 3, 4, 5, 6, 7};                                         // initialization
  printf("arr[0] = %d\n arr[1] = %d\n arr[4] = %d\n", arr[0], arr[1], arr[4]); // arr[4] is grabage if we declate array fisrt all its values goes as grabage

  int arr3[7] = {11, 22, 33, 44}; // partial initialization here which valuse are not give there defult value is zero

  // int arr4[]; error
  int arr4[] = {11, 22, 33, 44, 55};

  printf("Array elements:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%4d", arr2[i]);
  }

  return 0;
}