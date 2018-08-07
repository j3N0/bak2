#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	Stack S = CreateStack();
	
	Push(1, S);
	Push(2, S);
	Push(3, S);
	while (!IsEmpty(S)) {
		printf("%d\n", Top(S));
		Pop(S);
	}
	DisposeStack(S);
	return 0;

}
