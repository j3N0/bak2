#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
	List L = malloc(sizeof(struct Node));
	if(L == NULL)
		FatalError("Out of Memory");
	L->Next = NULL;

	Insert(1, L, L);
	Insert(2, L, L);
	
	Delete(1, L);
	
	Position P = L;
	while ((P = P->Next) != NULL)
		printf("%d\t", P->Element);
	putchar('\n');
	/*
	printf("%d\n", IsEmpty(L));
	*/

	DeleteList(L);
	free(L);
	return 0;
}
