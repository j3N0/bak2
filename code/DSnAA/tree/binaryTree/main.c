#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void Traversal(SearchTree T);
int main(void)
{
    SearchTree T ;
    T = malloc(sizeof(struct TreeNode));
    T->Left = NULL;
    T->Right = NULL;
    T->Element = 6;
    
    Insert(2, T);
    Insert(1, T);
    Insert(8, T);
    Insert(4, T);
    Insert(3, T);
    Delete(4, T);

    Traversal(T);

    MakeEmpty(T);
    
    return 0;
}
void Traversal(SearchTree T)
{
    if (T != NULL)
    {      
        Traversal(T->Left);     
        Traversal(T->Right);  
        printf("%d\n", T->Element);      
    }
    
}