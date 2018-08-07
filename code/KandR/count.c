#include <stdio.h>
#define IN 1
#define OUT 0
int main(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			nw++;
			state = IN;
		}
	}
	printf("nc: %d\n", nc);
	printf("nw: %d\n", nw);
	printf("nl: %d\n", nl);
	return 0;
}

