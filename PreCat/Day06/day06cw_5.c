// Anonamous enum
// enum which has no name
#include <stdio.h>
int main()
{
  enum
  {
    one,
    two,
    three,
    four,
    five
  } d1, d2, d3; // variables
  typedef enum
  {
    sales,
    HR,
    finance,
    marketing
  } dept, dts; // dept,dts -alias
  dts d2;      // d2 is a variable
  dept d1;     // d1 is a variable

  return 0;
}