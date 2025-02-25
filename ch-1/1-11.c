/*
 * K&R The C Programming Language
 *
 * Exercise 1-11.
 * How would you test the word count program?
 * - One way is to use cli tools like 'wc':
 *   echo "hello world" | wc
 *         1     2      12
 *
 * What kind of inputs are most likely to uncover bugs if there are any?
 * - The current program works by checking for blanks, newlines, and tabs
 *   to differentiate between words (and lines). Meaning, if words are
 *   separated my hyphens ('-'), underscores ('_'), or any sort of case
 *   separated syntax like 'HelloWorld', it all counts as one word.
 *
 * By souriosec
 */

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

/*
 * Word count program.
 * Count lines, words, and characters in input.
 */
int main() {
  int c, lines, words, chars, state;

  lines = 0;
  words = 0;
  chars = 0;

  state = OUT;

  while ((c = getchar()) != EOF) {
    ++chars;

    if (c == '\n') {
      ++lines;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++words;
    }
  }

  printf("Lines: %d\nWords: %d\nChars: %d\n", lines, words, chars);

  return 0;
}
