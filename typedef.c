#include <stdio.h>
#include <string.h>

typedef struct 
{
char name[25];
int id;
} user;


int main ()
{

user user1 = {"Demba Ba", 123456789};

printf("Your name is %s\n", user1.name);
printf("Your ID id is %d\n", user1.id);

  return 0;
}