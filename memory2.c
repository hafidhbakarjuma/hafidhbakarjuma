#include <stdio.h>
#include <stdlib.h>

// Malloc allocation it's type of memory allocatio ---- ptr = (int*) malloc(a* sizeof(int));
// Also "calloc memory allocation" ----  ptr = (int*) calloc(a, sizeof(int));
// "realloc memory aloocation" ------ ptr = (int*) realloc(ptr,a* sizeof(int));
//"free memory allocation" ----- free(ptr);

int main ()
{
int a = 10;
int* ptr;
  
ptr = (int*) calloc(10,sizeof(int));
  for (int i = 0; i<a; i++){
printf("%p\n", &ptr+i);
    }

    free (ptr);
  return 0;
}