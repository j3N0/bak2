#include <stdio.h>
int main(void)
{
	int i;
	int c, nwhite, nother, ndigit;
	nwhite = nother = ndigit = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			ndigit++;
		else if (c == ' ' || c == '\t' || c == '\n')
			nwhite++;
		else
			++nother;
	for (i = 0; i < nwhite; i++)
		putchar('|');
	putchar('\n');
	for (i = 0; i < nother; i++)
		putchar('|');
	putchar('\n');
	for (i = 0; i < ndigit; i++)
		putchar('|');
	putchar('\n');

	return 0;
}
