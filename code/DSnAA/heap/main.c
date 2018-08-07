#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void print(PriorityQueue H);
int main(void)
{
    PriorityQueue H;
    H = Initialize(20);
    Insert(13, H);
    Insert(14, H);
    Insert(16, H);
    Insert(19, H);
    Insert(21, H);
    Insert(19, H);
    Insert(68, H);
    Insert(65, H);
    Insert(50, H);
    Insert(32, H);
    Insert(31, H);

    DeleteMin(H);

    print(H);

    MakeEmpty(H);
    return 0;
}

void print(PriorityQueue H)
{
    int i;
    for(i = 1; H->Size > i -1; i++)
        printf("%d\n", H->Elements[i]);

}