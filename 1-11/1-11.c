/*
 * Exercise 1-11.
 * How would you test the word count program?
 * What kinds of input are most likely to uncover bugs if
 * there are any?
 *
 * I would test it by taking advantage of its weak definition.
 * printable characters that connect words would combine two
 * words into one according to the definition that "a word
 * is any sequence of characters that does not contain a blank,
 * tab or newline."
 *
 * Thus "found him...dead", or "left home—having sailed", would
 * result in word counts of 2 and 3, respectively.
 */

#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}
