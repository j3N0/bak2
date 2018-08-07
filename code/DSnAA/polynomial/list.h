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
void Insert(ElementType X, ElementType Y, List L, Position P);
void Delete(ElementType X, List L);
void DeleteList(List L);

typedef PtrToNode Polynomial;

Position FindExponent(ElementType X, Polynomial L);
void MultPolynomial(const Polynomial P1, const Polynomial P2,
		Polynomial PolyProd);
void ZeroPolynomial(Polynomial Poly);
void DeletePolynomial(Polynomial Poly);
void InsertSort(ElementType Coeff, ElementType Exponent, Polynomial Poly);
Position FindPrevious(ElementType Exponent, Polynomial Poly);
struct Node {
	int Coeff;
	int Exponent;
	PtrToNode Next;
};

#endif


