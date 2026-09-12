// for(init; condition; update) {
//     body of the loop
// }

#include <stdio.h>

int main(void) {
  printf("Initiating Rocket Launch Sequence...\n");

  // We want to count down from 5 to 1.
  // 1. Init: Start at 5 (int t = 5)
  // 2. Condition: Keep going as long as t is greater than 0 (t > 0)
  // 3. Update: Subtract 1 after each loop (t--)
  for (int t = 5; t > 0; t--) {
    printf("T-minus %d seconds...\n", t);
  }

  printf("LIFTOFF! \n");

  return 0;
}