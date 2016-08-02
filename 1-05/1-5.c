/*
 * Exercise 1-5.
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 */
#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = upper;

	printf("Fahrenheit  Celsius\n");
	while (fahr >= lower) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%8.0f %10.1f\n", fahr, celsius);
		fahr -= step;
	}
}
