#ifndef _stack_h
#define _stack_h

struct StackRecord;
typedef struct StackRecord *Stack;
typedef int ElementType;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack s);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack s);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);

#endif

#define EmptyOS (-1)
#define MinStackSize 5
struct StackRecord {
	int Capacity;
	int TopOfStack;
	ElementType *Array;
};
#include <stdio.h>
#define FatalError(N) fprintf(stderr, N);
