#include <stdio.h>

int main() {
  int i;
  int j;

  for (i = 0; i <= 8; i++) {
    for (j = 1; j <= 9; j++) {
      printf("%d%d", i, j);

      if (!(i == 8 && j == 9)) {
        printf(", ");
      }
    }
  }
  printf("\n");
  return 0;
}