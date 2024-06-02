#include <stdio.h>

// This is Function prototype
// It going to define the function after the main functiion
// You need to mention the type of argument before the main function

void hello(char name[], int age);


int main() {
    
char name[] = "Demba";
int age = 25;

hello(name,age);

    return 0;
}

void hello(char name[], int age)
{

  printf(" Hello %s ", name);
  printf(" You are %d years old", age);
}