#ifndef __AvlTree__H
#define __AvlTree__H

struct AvlNode;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;
typedef int ElementType;

AvlTree MakeEmpty(AvlTree T);
Position Find(ElementType X, AvlTree T);
Position FindMin(AvlTree T);
Position FindMax(AvlTree T);
AvlTree Insert(ElementType X, AvlTree T);
AvlTree Delete(ElementType X, AvlTree T);
ElementType Retrieve(Position P);

#endif
struct AvlNode 
{
    ElementType Element;
    AvlTree Left;
    AvlTree Right;
    int Height;
};
#include <stdio.h>
#define FatalError(N) fprintf(stderr, N);