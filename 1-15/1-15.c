/*
 * Exercise 1-15.
 * Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 */
#include <stdio.h>

float fahr_to_celsius(float fahr);

int main()
{
	int lower = 0;
	int upper = 300;
	int step = 20;
	float fahr = lower;

	printf("Fahrenheit  Celsius\n");
	while (fahr <= upper) {
		printf("%10.0f %8.1f\n", fahr, fahr_to_celsius(fahr));
		fahr += step;
	}
}

float fahr_to_celsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}
