#include <stdio.h>


int main () {

int n,num1,num2,result;
char option = 'y';
do {
printf("Which operate do you want\n");
printf("press number 1 for addition\n");
printf("press number 2 for substraction\n");
printf("press number 3 for divition\n");
printf("press number 4 for multiplication\n");

printf("Choose a number of this list\n");
scanf("%d", &n);

printf("Enter num1\n");
scanf("%d", &num1);
printf("Enter num2\n");
scanf("%d", &num2);

switch (n) 
{
  case 1: result = num1+num2;
  printf("addition of two number is %d ", result);
  break;
  case 2: result = num1-num2;
  printf("substraction of two number is %d ", result);
  break;
  case 3: result = num1/num2;
  printf("divition of two number is %d ", result);
  break;
  case 4: result = num1*num2;
  printf("multiplication of two number is %d ", result);
  break;
  default: printf("Wrong number ");
}
printf("\n do you want to continue ");

} while (option=='y');
return 0;
} 
