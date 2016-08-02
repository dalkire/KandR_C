/*
 * Exercise 1-4.
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */
#include <stdio.h>

int main()
{
	int lower = 0;
	int upper = 300;
	int step = 20;
	int fahr;
	int celsius = lower;

	printf("Celsius  Fahrenheit\n");
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%7d %11d\n", celsius, fahr);
		celsius += step;
	}
}
