#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	Stack S = CreateStack(10);
	
	Push(1, S);
	Push(2, S);
	Push(3, S);
	while (!IsEmpty(S)) {
		printf("%d\n", TopAndPop(S));
	}
	DisposeStack(S);
	return 0;

}
