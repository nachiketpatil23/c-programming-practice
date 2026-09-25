// Typedef
// another name given to the predefined datatype and userdefined datatype

#include <stdio.h>
int main()
{
  unsigned int num1;
  unsigned int num2;
  unsigned int num3;

  typedef unsigned int u_int;
  u_int num4;
  u_int num5;
  unsigned int num6;

  typedef int i;
  i num7;

  enum colours
  {
    red,
    black,
    blue,
    yellow,
    voilet
  };
  typedef enum colours clr;
  enum colours c1;
  clr c2;
  typedef enum department
  {
    sales,
    HR,
    finance,
    marketing
  } dept;  // deptis a alias
  dept d1; // d1 variable
  dept d2;
}