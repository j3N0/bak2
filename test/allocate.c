#include <stdio.h>
#include <stdlib.h>

int global = 0;
int main(void)
{
	int auto_int = 1;
	static int static_int = 2;
	char *const_str = "const_str";
	char *malloc_str = (char*) malloc(10 *sizeof(char));

	printf("global at %p\n", &global);
	printf("auto_int at %p\n", &auto_int);
	printf("static_int at %p\n", &static_int);
	printf("const_str at %p\n", const_str);
	printf("other_const_str at %p\n", "other_const_str");
	printf("malloc_char at %p\n", malloc_str);

	free(malloc_str);

	return 0;
}
