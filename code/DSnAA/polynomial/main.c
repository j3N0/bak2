#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define _Insert(X1, X2, N) Insert(X1, X2, N, N);
void Init(Polynomial P1, Polynomial P2, Polynomial P3);
void PrintPolynomial(Polynomial Poly);
void delete(Polynomial P1, Polynomial P2, Polynomial P3);
int main(void)
{
	Polynomial P1, P2, P3;
	P1 = malloc(sizeof(struct Node));
	P2 = malloc(sizeof(struct Node));
	P3 = malloc(sizeof(struct Node));


	Init(P1, P2, P3);
	MultPolynomial(P1, P2, P3);
	PrintPolynomial(P3);

	delete(P1, P2, P3);
	return 0;
}

void Init(Polynomial P1,Polynomial P2, Polynomial P3)
{
	ZeroPolynomial(P1);
	ZeroPolynomial(P2);
	ZeroPolynomial(P3);

	_Insert(1, 0, P1);
	_Insert(5, 14, P1);
	_Insert(10, 1000, P1);
	_Insert(20, 1990, P1);

	_Insert(5, 0, P2);
	_Insert(11, 1, P2);
	_Insert(-2, 1492, P2);
	_Insert(3, 1990, P2);
}

void PrintPolynomial(Polynomial Poly)
{
	Position P;

	P = Poly->Next;
	while (P != NULL) {
		printf("Coeff:%5d Exponent:%5d\n", P->Coeff, P->Exponent);
		P = P->Next;
	}
}

void delete(Polynomial P1, Polynomial P2, Polynomial P3)
{
	if (P1 != NULL) {
		DeletePolynomial(P1);
		free(P1);
	}
	if (P2 != NULL) {
		DeletePolynomial(P2);
		free(P2);
	}
	if (P3 != NULL) {
		DeletePolynomial(P3);
		free(P3);
	}
}
