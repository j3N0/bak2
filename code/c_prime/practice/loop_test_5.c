#include <stdio.h>

int main(void)
{
	int begin, end, temp;
	int i;

	printf("Please enter the range of number( begin ~ end )\n");
	scanf("%d %d", &begin, &end);

	if ( begin > end)
	{
		temp = begin;
		begin = end;
		end = temp;
	}

	for(i = begin; i <= end; i++)
	{
		printf("%5d %5d %5d\n", i, i*i, i*i*i);
	}

	return 0;
}
	
		
