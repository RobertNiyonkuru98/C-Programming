#include <stdio.h>

int main(void) {
  int age = 20;
  // printf("Hello World\n");
  printf("Age: %d\n", age);     // printing the integer
  printf("%zu\n", sizeof(age)); // size of the data
  printf("%p\n", &age);         // memory slot or block at the RAM location
  return 0;
}