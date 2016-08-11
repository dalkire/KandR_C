/*
 * Exercise 1-19.
 * Write a function _reverse(s)_ that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */
#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int maxline);
void reverse(char s[], int len);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = _getline(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s\n", line);
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

void reverse(char s[], int len)
{
	for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
		int tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
