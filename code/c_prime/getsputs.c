#include <stdio.h>
#define STRLEN 5
int main(void)
{
	char word[STRLEN];
	
	puts("Enter a string");
	gets(word);
	puts("It's this ?");
	puts(word);

	return 0;
}
