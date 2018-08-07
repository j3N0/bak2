#include <stdio.h>
#define MAX 1000
int main(void)
{
	int i, j, k;
	

	for (i = -MAX; i <= MAX; i++)
		for (j = i+1; j <= MAX; j++)
			for (k = j+1; k<= MAX; k++)
				if (i*i*i+j*j*j+k*k*k == 74l)
					printf("%d %d %d\n", i, j, k);

	return 0;
}
