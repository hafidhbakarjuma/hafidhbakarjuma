#include <stdio.h>
#include <string.h>

  struct student   {
  int id;
  int age;
  char name[100];
  char address[100];
  int phone[100];
  char email[100];
  char gender[100];
  char hobby[100];

};

int main() {

  struct student demba;
demba.id = 1;
demba.age = 30;
strcpy(demba.name, "Demba");
strcpy(demba.gender, "male");
strcpy(demba.hobby, "football");
demba.phone, "0661829854";
strcpy(demba.email, "hafidhbakr504@gmail.com");
strcpy(demba.address, "9 weescheed 9809 hosingen");

  

printf("NAME: %s\n", demba.name);
printf("AGE: %d\n", demba.age);
printf("ID %d\n", demba.id);
printf("GENDER: %s\n", demba.gender,);
printf("HOBBY: %s\n", demba.hobby);
printf("PHONE:%d\n", demba.phone;)
printf("EMAIL: %s\n", demba.email);
printf("ADDRESS: %s\n", demba.address);


  
    return 0;
}





