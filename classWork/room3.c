#include <stdio.h>

int main(void) {
  // activity 1
  //   for (int i = 0; i <= 20; i++) {
  //     // if (i % 2 == 0 && i % 3 == 0) {
  //     //   printf("%d\n", i);
  //     // }
  //     if (i % 6 == 0) { //=> I prefer this
  //       printf("%d\n", i);
  //     }
  //  }

  int number = 12345;
  int count = 0;

  while (number != 0) {
    number = number / 10;
    count++;
  }

  printf("Number of digits: %d\n", count);
  return 0;
}