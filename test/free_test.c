#include <stdio.h>
#include <stdlib.h>

void fun(int *i);
int main(void)
{
	int *i = NULL;
	i = malloc(sizeof(int));
	*i = 10;
	free(i);
	fun(i);
	printf(i == NULL ? "NULL\n" : "Not NULL\n");

	return 0;
}
void fun(int *i)
{
	printf("%d\n", *i);
}
