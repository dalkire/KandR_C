/*
 * Exercise 1-13.
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */
#include <stdio.h>

#define is_whitespace(c) (c == ' ' || c == '\t' || c == '\n')
#define MAX_WORD_LEN 20

void print_histogram(int word_lengths[MAX_WORD_LEN]);

int main()
{
	int c;
	int count = 0;
	int prev = 0;
	int max_len = 0;
	int word_lengths[MAX_WORD_LEN] = {0};

	while ((c = getchar()) != EOF) {
		if (is_whitespace(c)) {
			if (!is_whitespace(prev)) {
				word_lengths[count]++;
				count = 0;
			}
		} else {
			count++;
			max_len = (count > max_len) ? count : max_len;
		}
		prev = c;
	}
	word_lengths[count]++;

	print_histogram(word_lengths);
}

void print_histogram(int word_lengths[MAX_WORD_LEN])
{
	int num_rows = 0;
	printf("\n");
	for (int i = 0; i < MAX_WORD_LEN; i++) {
		if (word_lengths[i] > num_rows) {
			num_rows = word_lengths[i];
		}
	}

	for (int i = num_rows; i > 0; i--) {
		for (int j = 1; j < MAX_WORD_LEN; j++) {
			if (word_lengths[j] >= i) {
				printf("= ");
			} else {
				printf(". ");
			}
		}
		printf("\n");
	}
}
