#include "tree.h"
#include <stdlib.h>

AvlTree MakeEmpty(AvlTree T)
{
    if (T != NULL)
    {
        MakeEmpty(T->Left);
        MakeEmpty(T->Right);
        free(T);
    }
    return T;
}
static int Height(Position P)
{
    if (P == NULL)
        return -1;
    else 
        return P->Height;
}
static int Max(int a, int b)
{
    return (a) > (b) ? (a) : (b);
}

static Position SingleRotateWithLeft(Position K2)
{
    Position K1;

    K1 = K2->Left;
    K2->Left = K1->Right;
    K1->Right = K2;

    K2->Height = Max(Height(K2->Left), Height(K2->Right)) + 1;
    K1->Height = Max(Height(K1->Left), Height(K1->Right)) + 1;

    return K1;
}
static Position SingleRotateWithRight(Position K2)
{
    Position K1;

    K1 = K2->Right;
    K2->Right = K1->Left;
    K1->Left = K2;

    K2->Height = Max(Height(K2->Left), Height(K2->Right)) + 1;
    K1->Height = Max(Height(K1->Left), Height(K1->Right)) + 1;

    return K1;
}

static Position DoubleRotateWithLeft(Position K3)
{
    K3->Left = SingleRotateWithRight(K3->Left);
    return SingleRotateWithLeft(K3);
} 

static Position DoubleRotateWithRight(Position K3)
{   
    K3->Right = SingleRotateWithLeft(K3->Right);
    return SingleRotateWithRight(K3);
} 



AvlTree Insert(ElementType X, AvlTree T)
{
    if (T == NULL)
    {
        T = malloc(sizeof(struct AvlNode));
        if (T == NULL)
        {
            FatalError("Out of space!");
        }else
        {
            T->Element = X;
            T->Height = 0;
            T->Left = T->Right = NULL;
        }
    }
    else if (X > T->Element)
    {
        T->Right = Insert(X, T->Right);
        if (Height(T->Right) - Height(T->Left) == 2)
            if (X > T->Right->Element)
                T = SingleRotateWithRight(T);
            else 
                T = DoubleRotateWithRight(T);
    }
    else if (X < T->Element)
    {
        T->Left = Insert(X, T->Left);
        if (Height(T->Left) - Height(T->Right) == 2)
            if (X < T->Left->Element)
                T = SingleRotateWithLeft(T);
            else
                T = DoubleRotateWithLeft(T);
    }
    
    T->Height = Max(Height(T->Left), Height(T->Right)) + 1;
    return T;
}

Position Find(ElementType X, AvlTree T)
{
    if (T == NULL)
        return NULL;
    if (T->Element > X)
        return Find(X, T->Left);
    else if (T->Element < X)
        return Find(X, T->Right);
    else
        return T;
}