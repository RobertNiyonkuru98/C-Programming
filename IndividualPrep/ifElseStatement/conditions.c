// if (test_condition) {
//     //body of if statement
// }

// if (test_condition) {
//     //body of if statement
// }
// else {
//     // statement of else body
// }

// if (test_condition) {
//     //body of if statement
// }
// else if (test_condition2) {
//     // statement 2
// }
// else {
//     // statement of else body
// }

#include <stdio.h>

int main(void) {
  int age;
  int age1 = 15;
  printf("Enter your age: ");

  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible to vote\n");
  } else {
    printf("Sorry you are not eligible to vote\n");
  }

  if (age > 120) {
    printf("Invalid age");
  } else if (age < 0) {
    printf("Invalid Age");
  } else if (age >= 18) {
    printf("You are eligible to vote\n");
  } else {
    printf("Sorry you are not eligible to vote bruh\n");
  }
  return 0;
}