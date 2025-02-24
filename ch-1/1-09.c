/*
 * K&R The C Programming Language
 *
 * Exercise 1-9. Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 *
 * By souriosec
 */

#include <stdio.h>

int main() {
  int c, blank;

  blank = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!blank) {
        putchar(c);
        blank = 1;
      }
    } else {
      putchar(c);
      blank = 0;
    }
  }

  printf("\n");

  return 0;
}
