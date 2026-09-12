// while (condition) {
// //statements inside while
// }
//
#include <stdio.h>

int main() {
  int count = 1;
  int isGameOver = 0;
  char choice;

  while (count < 5) {
    printf("While loop in a C\n");
    count = count + 1;
  }

  while (isGameOver == 0) {
    printf("The game is running! Press 'q' to quit: ");

    scanf(" %c", &choice);

    if (choice == 'q') {
      isGameOver = 1;
      printf("Game Over!\n");
    }
  }
}