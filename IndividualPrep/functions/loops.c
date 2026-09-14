#include <stdio.h>

void print_numbers(void) {
  int i;
  for (i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }
}

int main(void) {
  // Call the function you created above
  print_numbers();
  
  return 0;
}