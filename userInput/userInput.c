#include <stdio.h>

int main(void) {

  int age;
  double number;
  char alphabet;
  char name[50];

  printf("Enter input value: \n");
  scanf("%d", &age); // Ampersand represents the memory address

  printf("Age = %d\n", age);

  printf("Enter double input: ");
  scanf("\n%lf", &number);

  printf("Enter character input: ");
  scanf("\n%c", &alphabet);

  printf("Enter string input: ");
  scanf("\n%s", name);

  printf("Enter input values: ");
  scanf("\n%lf %c %s", &number, &alphabet, name);

  printf("Number: %lf\n", number);
  printf("Character: %c\n", alphabet);
  printf("String: %s\n", name);

  return 0;
}