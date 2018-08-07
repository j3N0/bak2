#include <stdio.h>
int s_getline (char line[], int lim);
void copy (char dst[], char src[]);
#define MAXLINE 1000
int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = s_getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s\n", longest);
	return 0;
}

int s_getline (char line[], int lim)
{
	int c, i;

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy (char dst[], char src[])
{
	int i;
	i = 0;

	while ((dst[i] = src[i]) != '\0')
		i++;
}
