#include <stdio.h>


// Function with if else statement
// value if true : value if false


int findMax(int y, int x)
{

if (x > y)
{
  return x;
} else {
  return y;
}

//return (y > x) ? y : x; This function is value if true : value if false but it returns same value
}


int main ()
{

int max = findMax(4, 5);
printf("%d ", max);

  return 0;
}