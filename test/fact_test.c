#include <stdio.h>

int fact(int num);
int main(void)
{
	int i;
	puts("Please input a number:");
	scanf("%d", &i);

	printf("%d\n", fact(i));
	return 0;
}

int fact(int num)
{
	if (num == 1 || num == 0)
		return 1;
	return num * fact(num - 1);
}

