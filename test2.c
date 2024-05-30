#include <stdio.h>



// Function with return statement

int max(int x)
{

return x + x + x * x; 
}

int main ()
{

int x = max(20);
printf("%d", x);


  return 0;
}