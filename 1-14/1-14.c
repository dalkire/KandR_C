/*
 * Exercise 1-14.
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 */
#include <stdio.h>

#define is_whitespace(c) (c == ' ' || c == '\t' || c == '\n')
#define MAX_CHARS 128

void print_histogram(int word_lengths[MAX_CHARS]);

int main()
{
	int c;
	int characters[MAX_CHARS] = {0};

	while ((c = getchar()) != EOF) {
		if (c < MAX_CHARS) {
			characters[c]++;
		}
	}
	print_histogram(characters);
}

void print_histogram(int word_lengths[MAX_CHARS])
{
	int num_rows = 0;
	printf("\n");
	for (int i = 0; i < MAX_CHARS; i++) {
		if (word_lengths[i] > num_rows) {
			num_rows = word_lengths[i];
		}
	}

	for (int i = num_rows; i > 0; i--) {
		for (int j = 1; j < MAX_CHARS; j++) {
			if (word_lengths[j] >= i) {
				printf("# ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < MAX_CHARS; i++) {
		printf("%c ", i);
	}
	printf("\n");
}
