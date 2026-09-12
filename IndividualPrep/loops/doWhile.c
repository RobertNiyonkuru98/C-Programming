// do {
//  Body of the loop
//} while (condition); //
#include <stdio.h>

int main(void) {
  int choice;

  do {
    printf("\n--- Main Menu ---\n");
    printf("1. Play Game\n");
    printf("2. Settings\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    if (choice == 1) {
      printf("Starting game...\n");
    } else if (choice == 2) {
      printf("Opening settings...\n");
    }

    // 2. ...WHILE this condition remains true.
    // If they enter 3, choice != 3 becomes false, and the loop stops.
  } while (choice != 3);

  printf("Goodbye!\n");

  return 0;
}
