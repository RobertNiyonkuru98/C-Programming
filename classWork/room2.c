#include <stdio.h>

int main(void) {
  int choice;

  printf("1 -> Add\n2 -> Subtract\n3 -> Multiply\n4 -> Divide\n");
  printf("Select an operation: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("You chose to Add!\n");
    break;
  case 2:
    printf("You chose to Subtract!\n");
    break;
  case 3:
    printf("You chose to Multiply!\n");
    break;
  case 4:
    printf("You chose to Divide!\n");
    break;
  default:
    printf("Invalid selection.\n");
    break;
  }

  return 0;
}
