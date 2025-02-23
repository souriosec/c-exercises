/*
 * K&R The C Programming Language
 *
 * Exercise 1-3. Modify the temperature conversion program to print
 * a heading above the table.
 *
 * By souriosec
 */

#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating point version
 */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    // lower limit of temperature table
  upper = 60;   // upper limit
  step = 20;    // step size
  fahr = lower; // farenheit value tracker

  printf("Farenheit | Celsius\n");
  printf("-------------------\n");

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0); // conversion formula
    printf("%10.0f %8.1f\n", fahr, celsius);
    fahr = fahr + step; // step fahr value: 0, 20, ..., 300
  }

  return 0;
}
