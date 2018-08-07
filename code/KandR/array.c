#include <stdio.h>
int main(void)
{
	int c, i, nwhite, nother;
	int ndigit[10] = {0};

	nwhite = nother = 0;

	while ((c = getchar()) != EOF) 
		if (c >= '0' && c <= '9')
			ndigit[c-'0']++;
		else if (c == ' ' || c == '\n' || c =='\t')
			nwhite++;
		else
			nother++;

	printf("digit =");
	for (i = 0; i < 10; i++)
		printf(" %d ", ndigit[i]);
	printf("white space = %d, other = %d\n",
			nwhite, nother);
	return 0;
}
