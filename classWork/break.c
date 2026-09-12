#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    if (i == 5)
      //   continue; // skip the returned value
      break; //
    printf("%d\n", i);
  }
}