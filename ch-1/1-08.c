/*
 * K&R The C Programming Language
 *
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 *
 * By souriosec
 */

#include <stdio.h>
int main() {
  int c, blanks, tabs, newlines;

  c = 0;
  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++newlines;
    }

    if (c == ' ') {
      ++blanks;
    }

    if (c == '\t') {
      ++tabs;
    }
  }

  printf("newlines: %d\nblanks: %d\ntabs: %d\n", newlines, blanks, tabs);

  return 0;
}
