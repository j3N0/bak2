#ifndef _List_H
#define _List_H

#include <stdio.h>
#define FatalError(N) fprintf(stderr, N);
typedef int ElementType;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

int IsEmpty(List L);
int IsLast(Position P, List L);
List MakeEmpty(List L);
Position Find(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert(ElementType X, List L, Position P);
void Delete(ElementType X, List L);
void DeleteList(List L);

struct Node {
	ElementType Element;
	Position Next;
};
#endif


