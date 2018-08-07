#include <stdlib.h>
#include "stack.h"

Stack CreateStack(int MaxElements)
{
	Stack S;

	if (MaxElements < MinStackSize) {
		FatalError("Stack size is too small");
	}

	S = malloc(sizeof(struct StackRecord));
	if (S == NULL) {
		FatalError("Out of space");
	}
	S->Array = malloc(sizeof(ElementType) * MaxElements);
	if (S->Array == NULL) {
		FatalError("Out of space");
	}
	S->Capacity = MaxElements;
	MakeEmpty(S);

	return S;
}

void DisposeStack(Stack S)
{
	if (S != NULL)
	{
		free(S->Array);
		free(S);
	}
}

int IsEmpty(Stack S)
{
	return S->TopOfStack == EmptyOS;
}
int IsFull(Stack S)
{
	return S->TopOfStack == S->Capacity - 1;
}
void MakeEmpty(Stack S)
{
	S->TopOfStack = EmptyOS;
}
void Push(ElementType X, Stack S)
{
	if (IsFull(S)) {
		FatalError("Full Stack");
	} else
		S->Array[ ++S->TopOfStack ] = X;
}

ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[S->TopOfStack];
	FatalError("Empty Stack");
	return 0;
}

void Pop(Stack S)
{
	if (IsEmpty(S)) {
		FatalError("Empty Stack");
	} else 
		S->TopOfStack--;
}
ElementType TopAndPop(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[ S->TopOfStack-- ];
	FatalError("Empty Stack");
	return 0;
}
