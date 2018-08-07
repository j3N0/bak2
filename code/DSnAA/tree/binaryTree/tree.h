#ifndef __Tree__H
#define __Tree__H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;
typedef int ElementType;

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X, SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X, SearchTree T);
SearchTree Delete(ElementType X, SearchTree T);

#endif
struct TreeNode 
{
    ElementType Element;
    SearchTree Left;
    SearchTree Right;
};
#include <stdio.h>
#define FatalError(N) fprintf(stderr, N);