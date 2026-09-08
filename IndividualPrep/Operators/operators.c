// Addition +
// Substraction -
// Multiplication *
// Division /
// Remainder %
// Increment ++
// Decrement --

#include <stdio.h>

int main(void) {

  int x = 12;
  int result = x + 8;

  double y = 12.57;
  double result1 = y + 8.67;

  double z = 12.00;
  double result3 = z / 8.00;

  int a = 13;
  int b = 4 / 2 + 6 * 5 - 1;

  int c = 100;
  c = c - 30;

  printf("%d\n", result);
  printf("%lf\n", result1);
  printf("%lf\n", result3);
  printf("%d\n", c);
  printf("%d", ++a);
  printf("%d", --a);
  printf("%d", b);
  return 0;
}