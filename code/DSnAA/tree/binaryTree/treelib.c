#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

SearchTree MakeEmpty(SearchTree T)
{
    if (T != NULL)
    {
        MakeEmpty(T->Left);
        MakeEmpty(T->Right);
        free(T);
    }
    return T;
}

Position Find(ElementType X, SearchTree T)
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

SearchTree Insert(ElementType X, SearchTree T)
{
    if (T == NULL)
    {
        T = malloc(sizeof(struct TreeNode));
        if (T == NULL)
        {
            FatalError("Out of space!");
        }else
        {
            T->Element = X;
            T->Left = T->Right = NULL;
        }
    }
    else if (X > T->Element)
        T->Right = Insert(X, T->Right);
    else if (X < T->Element)
        T->Left = Insert(X, T->Left);
    else 
        return T;
}

Position FindMin(SearchTree T)
{
    if (T != NULL)
        while(T->Left != NULL)
            T = T->Left;
    return T;
}

SearchTree Delete(ElementType X, SearchTree T)
{
    Position Tmp;

    if (T == NULL)
    {
        FatalError("Element not found");
    }
    else if (X < T->Element)
        T->Left = Delete(X, T->Left);
    else if (X > T->Element)
        T->Right = Delete(X, T->Right);
    else if (T->Left && T->Right)
    {
        Tmp = FindMin(T->Right);
        T->Element = Tmp->Element;
        T->Right = Delete(T->Element, T->Right);
    }
    else
    {
        Tmp = T;
        if (T->Left == NULL)
            T = T->Right;
        else if (T->Right == NULL)
            T = T->Left;
        free(Tmp);
    }
    
    return T;
}