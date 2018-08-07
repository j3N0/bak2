#include <stdlib.h>
#include "stack.h"

Stack CreateStack(void)
{
	Stack S;

	S = malloc(sizeof(struct Node));
	if (S == NULL)
		FatalError("Out of space");
	S->Next = NULL;
	MakeEmpty(S);
	return S;
}

void MakeEmpty(Stack S)
{
	if (S == NULL) {
		FatalError("Must use CreateStack first");
	
	} else 
		while (!IsEmpty(S))
			Pop(S);
}

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}
void Push(ElementType X, Stack S)
{
	PtrToNode Tmp;

	Tmp = malloc(sizeof(struct Node));
	if (Tmp == NULL) {
		FatalError("Out of space");
	
	} else 
	{
		Tmp->Element = X;
		Tmp->Next = S->Next;
		S->Next = Tmp;
	}
}

ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Next->Element;
	FatalError("Empty stack");
	return 0;
}

void Pop(Stack S)
{
	PtrToNode First;

	if (IsEmpty(S)) {
		FatalError("Empty stack");
	} else 
	{
		First = S->Next;
		S->Next = First->Next;
		free(First);
	}
}

void DisposeStack(Stack S)
{
	if (S != NULL)
	{
		MakeEmpty(S);
		free(S);
	}
}
