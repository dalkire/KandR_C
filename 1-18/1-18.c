/*
 * Exercise 1-18.
 * Write a program to remove trailing blanks and tabs from each
 * line of input and to delete entirely blank lines.
 */
#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int maxline);
int trim(char s[], int len);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = _getline(line, MAXLINE)) > 0) {
		len = trim(line, len);
		printf("%d chars: %s\n", len, line);
	}
}

int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

int trim(char s[], int len)
{
	int count = 0;

	for (int i = len - 2; i >= 0; i--) {
		if (s[i] == ' ' || s[i] == '\t') {
			s[i] = '\0';
			count++;
		} else {
			break;
		}
	}

	return len - count;
}
