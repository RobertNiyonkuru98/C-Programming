#include <stdio.h>

int main(void) {

  printf("Enter Your Number: ");
  int number;

  scanf("%d", &number);

  printf("%d", number);

  if (number < 0) {
    printf("This is a negative number\n");
  } else if (number == 0) {
    printf("This is zero\n");
  } else {
    printf("This is a positive number\n");
  }

  return 0;
}