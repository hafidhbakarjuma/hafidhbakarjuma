#include <stdio.h>

int main(){

int const colums = 4;
int const rows = 2;
  int x[rows][colums] =
  {
  {1,2,3,4},
  {6,7,8,9}
  };
  
  for(int i=0; i<rows; i++) {
    for(int j=0; j<colums; j++) {
      printf("%d ", x[i][j]);
    }
    printf("\n");
  
  }


  printf("%d ", x[0][3]);

return 0;

}