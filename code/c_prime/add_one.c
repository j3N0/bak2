#include <stdio.h>

int main(void)
{
	int a, b;
	a = 1;
	b = 1;
	while( a < 5)
	{
		a++;
		++b;
		printf("Now a++ is %d, and ++b is %d\n",a, b);
	}
	return 0;
}
