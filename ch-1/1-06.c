/*
 * K&R The C Programming Language
 *
 * Exercise 1-6. Verify the expression getchar() != EOF is 0 or 1
 *
 * By souriosec
 */

#include <stdio.h>
int main() {
  printf("%d", getchar() != EOF);

  return 0;
}
