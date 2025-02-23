/*
 * K&R The C Programming Language
 *
 * Exercise 1-4. Write a program to print the corresponding Celsius
 * to Fahrenheit table.
 *
 * By souriosec
 */

#include <stdio.h>

/*
 * print Celsius-Farenheit table
 * for celsius = 0, 20, ..., 300; floating point version
 */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;       // lower limit of temperature table
  upper = 300;     // upper limit
  step = 20;       // step size
  celsius = lower; // celsius value tracker

  printf("Celsius | Fahrenheit\n");
  printf("--------------------\n");

  while (celsius <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32; // conversion formula
    printf("%8.0f %10.1f\n", celsius, fahr);
    celsius = celsius + step; // step celsius value: 0, 20, ..., 300
  }

  return 0;
}
