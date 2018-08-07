#include <stdio.h>
int s_getline(void);
void copy(void);
#define MAXLEN 1000

int max;
char longest[MAXLEN], line[MAXLEN];
int main(void)
{
	int len;
	extern int max;
	extern char longest[];
	
	max = 0;
	while ((len = s_getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) 
		printf("%s\n", longest);

	return 0;
}
int s_getline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLEN -1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
void copy(void)
{
	int i = 0;
	extern char line[], longest[];

	while ((longest[i] = line[i]) != '\0')
		++i;
}
