#include <stdio.h>

int *print(int num);
void printp(int *p);
int main(void)
{
	int a = 1;
	int *p = &a;

	printp(print(a));

	return 0;
}

int *print(int num)
{
	printf("%d\n", num);
	return &num;
}


void printp(int *p)
{
	printf("%d\n", *p);
}
	
