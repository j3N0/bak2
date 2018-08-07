#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *str = malloc(sizeof(char) * 3);
	strcpy(str, "aa");
	/*
	str[0] = 'a';
	str[1] = 'a';
	str[2] = '\0';
	*/
	printf("%s\n", str);
	printf("%d\n", strcmp(str, "aa"));
	free(str);
	return 0;
}
