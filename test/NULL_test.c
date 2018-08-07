#include <stdio.h>
#include <stdlib.h>

void test(int *p);
int main(void)
{
	int *x = malloc(sizeof(int));
	*x = 11;
	int *p = NULL;
	test(p);
	printf("%d\n", *p);
	free(p);
	free(x);
	return 0;
}
void test(int *p)
{
	p = malloc(sizeof(int));
	*p = 10;
}
