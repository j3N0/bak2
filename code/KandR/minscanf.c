#include <stdio.h>
#include <stdarg.h>
int minscanf (char *fmt, ...);
int main(void)
{
	int a;
	double b;
	char c;
	char *d;

	minscanf("%d/%f/%c/%s", &a, &b, &c, d);
	printf("a: %d\tb: %f\tc: %c\td:%s\n", a, b, c, d);
	return 0;
}
int minscanf (char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int *ival, count;
	double *dval;

	int c;
	va_start(ap, fmt);
	while ((c = getchar()) != EOF) {
		
