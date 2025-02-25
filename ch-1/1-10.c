/*
 * K&R The C Programming Language
 *
 * Exercise 1-10. Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b and each backslash
 * by \\. This makes tabs and backspaces visible in an unambiguous way.
 *
 * By souriosec
 */

#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("\\t");
    } else if (c == '\b') {
      printf("\\b"); // not tested
    } else if (c == '\\') {
      printf("\\\\");
    } else {
      putchar(c);
    }
  }

  return 0;
}
