// Escape sequence : \n  \r \t \b \" \' %% \\n
#include <stdio.h>
int main()
{
  printf("Statring\n Day 2\n");
  printf("Good Afternoon\rgreat\n");

  printf("Our Precat Modules are = Apti\tCPrograming\tDS\tCPP\tOS\tCN\tBigData\tAI\n");
  printf("I am working on java\b\b\b\bJ\n"); // not working for all just one letter is modifed
  printf("\"Hello World!\"\n");
  printf("\'Hello World!\'\n");
  printf("I got 79.7%% in My B tech\n"); // try just "% in calss or collage"
  printf("\\n\n");

  return 0;
}