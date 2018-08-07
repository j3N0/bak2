#include <stdio.h>

void convert(int num);
int main(void)
{
	int num;

	puts("Please input a number:");
	scanf("%d", &num);
	convert(num);
	puts("");

	return 0;
}

void convert(int num)
{
	if (num / 9)
		convert(num / 9);
	putchar(num % 9 + (num % 9 + 5) / 9 + '0');
}
