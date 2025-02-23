/*
 * K&R The C Programming Language
 *
 * Exercise 1-2. Experiment to find out what happens when printf's
 * argument string contains \c, where c is some character not listed above.
 *
 * By souriosec
 */

#include <stdio.h>
int main() {
  printf("Hello\n\t\"world\"\n");
  return 0;
}
