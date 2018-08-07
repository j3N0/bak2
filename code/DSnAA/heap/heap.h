#ifndef __BinHeap__H
#define __BinHeap__H

struct HeapStruct;
typedef struct HeapStruct *PriorityQueue;
typedef int ElementType;

PriorityQueue Initialize(int MaxElements);
void Destroy(PriorityQueue H);
void MakeEmpty(PriorityQueue H);
void Insert(ElementType X, PriorityQueue H);
ElementType DeleteMin(PriorityQueue H);
ElementType FindMin(PriorityQueue H);
int IsEmpty(PriorityQueue H);
int IsFull(PriorityQueue H);


#endif 

struct HeapStruct 
{
    int Capacity;
    int Size;
    ElementType *Elements;
};

#define MinPQSize 10
#define MinDate -512
#include <stdio.h>
#define Error(N) fprintf(stderr, N);
#define FatalError(N) fprintf(stderr, N);