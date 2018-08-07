#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(100);
	p = malloc(200);

	free(p);

	return 0;
}
