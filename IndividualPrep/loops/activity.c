#include <stdio.h>

int main(void) {
  int i;
  int j;
  int balance = 3;
  int network = 1;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d %d\n", i, j);
    }
  }
  if (balance > 0) {
    if (network == 1) {
      printf("Call can proceed\n");
    }
  }
}