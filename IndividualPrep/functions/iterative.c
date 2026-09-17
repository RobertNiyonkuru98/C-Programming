#include <stdio.h>

int main() {
  int n = 5;
  int sum = 0;
  int i;
  for (i = 1; i <= 5; i++) {
    sum += i;
  }

  printf("This is the summation loop result: %d\n", sum);

  return (0);
}