#include <stdio.h>
#include <stdlib.h>

// Memory allocation with For loop

int main ()
{

int x = 4;

for (int i = 0; i < x; i++)
{
printf("%d bytes\n", x+i);
printf("%p ", &x+i);
}

return 0;
}