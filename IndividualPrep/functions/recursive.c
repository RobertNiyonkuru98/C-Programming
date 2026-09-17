#include <stdio.h>
int sum_recursive(int n) {
  if (n <= 0) {
    return (0);
  }
  return (n + sum_recursive(n - 1));
}

int main() {
  int n = 5;

  int result = sum_recursive(n);

  printf("This is the recursive result: %d\n", result);

  return (0);
}