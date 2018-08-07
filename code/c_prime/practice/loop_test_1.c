#include <stdio.h>
#define TU_BIAO "$"
#define TIME 5
int main(void)
{
	int i, j;
	
	for(i = 1; i <= TIME; i++)
	{
		for(j = 0; j < i; j++)
			printf(TU_BIAO);
		printf("\n");
	}

	return 0;
}

