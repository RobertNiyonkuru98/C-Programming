#include <stdio.h>

int is_lowercase(char c) {
  if (c >= 'a' && c <= 'z') {
    return (1);
  }
  return (0);
}

int main() {
  printf("%d\n", is_lowercase('a'));
  printf("%d\n", is_lowercase('A'));
  printf("%d\n", is_lowercase('7'));
}