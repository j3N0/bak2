#include <stdio.h>
#include <string.h>
#define SIZE 50

int main(void)
{
	char ch[SIZE] = {0};
	size_t i;
	
	printf("Please enter a string\n");
	scanf("%s", ch);
	
	for(i = strlen(ch); i >=0; i--)
	{
		printf("%c %lu\n", ch[i], i);
		//if( i == -1) break;
	}
	//printf("\n");
	printf("%zd\n", sizeof(strlen(ch)));
	printf("%zd\n", sizeof (long));
	printf("%zd\n", sizeof (size_t));
	printf("%zd\n", sizeof (unsigned long) );
	return 0;
}
		
