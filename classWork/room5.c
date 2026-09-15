#include <stdio.h>
int multiply(int a, int b) { return (a * b); }

int main(void) {
  int result = multiply(2, 3);

  printf("%d\n", result);

  return (0);
}