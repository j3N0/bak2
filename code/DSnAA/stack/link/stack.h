#ifndef _stack_h
#define _stack_h

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;
typedef int ElementType;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack s);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack s);
ElementType Top(Stack S);
void Pop(Stack S);

#endif

struct Node {
	ElementType Element;
	PtrToNode Next;
};
#include <stdio.h>
#define FatalError(N) fprintf(stderr, N);
