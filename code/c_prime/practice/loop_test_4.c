#include <stdio.h>

int main(void)
{	
	char ch1 = 'A';
	char ch2;
	int i, j;

	printf("Please enter a capital letter\n");
	scanf("%c", &ch2);

	int ROWS = ch2 - 'A';

	for(i = 0; i <= ROWS; i++)
	{
		for(j = 0; j <= ROWS-i-1; j++)
		{
			printf(" ");
		}
		for(j = 0; j <= i; j++)
		{
			printf("%c", ch1+j);
		}
		for(j = j -2; j >= 0; j--)
		{
			printf("%c", ch1+j);
		}
		printf("\n");
	}

	return 0;
}	
