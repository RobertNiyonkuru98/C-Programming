/*
int (4 bytes) | %d for printing
double (8 bytes) | %lf for printing
float (4 bytes) | %f for printing
char (1 byte) | %c for printing
*/

#include <stdio.h>

int main() {
  double number = 12.45;
  float number1 = 10.9f;
  double number2 = 5.5e6;
  char character = 'z';

  printf("%.2lf\n", number);
  printf("%.2f\n", number1);
  printf("%lf\n", number2);
  printf("%c\n", character);
  printf("%d\n", character); // integer value of the character
  return 0;
}