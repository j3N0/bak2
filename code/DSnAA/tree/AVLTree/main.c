#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void PostRetrieve(Position P);
int main(void)
{
    AvlTree T = NULL;

    T = Insert(3, T);
    T = Insert(2, T);
    T = Insert(1, T);
    T = Insert(4, T);
    T = Insert(5, T);
    T = Insert(6, T);
    T = Insert(7, T);

    T = Insert(16, T);
    T = Insert(15, T);
    T = Insert(14, T);
   
    T = Insert(13, T);
    // T = Insert(12, T);
    // T = Insert(11, T);
    // T = Insert(10, T);
    // T = Insert(8, T);

    PostRetrieve(T);

    MakeEmpty(T);
    return 0;

}
void PostRetrieve(Position P)
{
    if (P != NULL)
    {
        PostRetrieve(P->Left);
        printf("%d\n", P->Element);
        PostRetrieve(P->Right);
        
    }
}