#include <stdio.h>
#include <limits.h>   /* official min/max limits live here */

int main(void) {
  /* ---- Part 1: how much RAM does each type claim? ---- */
  printf("char          : %zu byte(s)  = %zu bits\n",
         sizeof(char), sizeof(char) * 8);
  printf("signed char   : %zu byte(s)\n", sizeof(signed char));
  printf("unsigned char : %zu byte(s)\n", sizeof(unsigned char));
  printf("int           : %zu byte(s)  = %zu bits\n",
         sizeof(int), sizeof(int) * 8);
  printf("long long     : %zu byte(s)\n", sizeof(long long));

  /* ---- Part 2: official min/max, straight from limits.h ---- */
  printf("\nSIGNED char   : %d .. %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("UNSIGNED char : 0 .. %u\n", UCHAR_MAX);
  printf("int           : %d .. %d\n", INT_MIN, INT_MAX);

  /* ---- Part 3: is plain 'char' signed or unsigned here? ---- */
#if CHAR_MIN < 0
  printf("\nplain char IS signed on this machine\n");
#else
  printf("\nplain char is UNSIGNED on this machine\n");
#endif

  /* ---- Part 4: RAM layout - addresses of neighbours ---- */
  char cs[3] = { 'a', 'b', 'c' };
  int  is[3] = { 10, 20, 30 };

  printf("\nthree chars side by side in RAM:\n");
  printf("  cs[0] at %p\n  cs[1] at %p\n  cs[2] at %p\n",
         (void *)&cs[0], (void *)&cs[1], (void *)&cs[2]);

  printf("three ints side by side in RAM:\n");
  printf("  is[0] at %p\n  is[1] at %p\n  is[2] at %p\n",
         (void *)&is[0], (void *)&is[1], (void *)&is[2]);

  return 0;
}
