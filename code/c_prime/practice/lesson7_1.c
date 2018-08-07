#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int space,tap,enter,other;
	space = tap = enter = other = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch) {
			case ' ': space++;
				  break;
			case '\t': tap++;
				   break;
			case '\n': enter++;
				   break;
			default: other++;
				      break;
		}
	}

	printf("space tap   enter  other\n");
	printf("%5d%5d%5d%5d\n", space, tap, enter, other);

	return 0;
}
	
