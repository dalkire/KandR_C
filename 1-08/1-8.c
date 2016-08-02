/*
 * Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines.
 */
#include <stdio.h>

int main()
{
	int c;
	int num_spaces = 0;
	int num_tabs = 0;
	int num_newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			num_spaces++;
		}
		else if (c == '\t') {
			num_tabs++;
		}
		else if (c == '\n') {
			num_newlines++;
		}
	}
	printf("\n\nSpaces:\t\t%d\nTabs:\t\t%d\nNewlines:\t%d\n", num_spaces, num_tabs, num_newlines);
}
