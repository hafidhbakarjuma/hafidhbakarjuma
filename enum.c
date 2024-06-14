#include <stdio.h>


enum Day {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

int main ()
{

enum Day today = mon;

if(today == sat || today == sun)
{
  printf("It's weekend party time! ");
} else {
  printf("I have to work! ");
}


  return 0;
}