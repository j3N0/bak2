#include <stdlib.h>
#include "list.h"

Position FindExponent(ElementType X, Polynomial L)
{
	Position P;

	P = L->Next;
	while (P != NULL && P->Exponent != X)
		P = P->Next;

	return P;
}

void Insert(ElementType Coeff, ElementType Exponent,
		Polynomial L, Position P)
{
	Position Tmp;

	Tmp = malloc(sizeof(struct Node));
	if (Tmp == NULL)
		FatalError("Out of Memory");

	Tmp->Coeff = Coeff;
	Tmp->Exponent = Exponent;
	Tmp->Next = P->Next;
	P->Next = Tmp;
}

void ZeroPolynomial(Polynomial Poly)
{
	Poly->Next = NULL;
}

void MultPolynomial(const Polynomial P1, const Polynomial P2,
		const Polynomial PolyProd)
{
	Position I, J, Finded;
	int Coeff, Exponent;
	
	for (I = P1->Next; I != NULL; I=I->Next)
		for(J = P2->Next; J != NULL; J=J->Next) {
			Coeff = I->Coeff * J->Coeff;
			Exponent = I->Exponent + J->Exponent;
			
			if ((Finded = FindExponent(Exponent, PolyProd))
						!= NULL)
			{
				Finded->Coeff += Coeff;
			}
			else {
				InsertSort(Coeff, Exponent, PolyProd);
			}
		}
}

void InsertSort(ElementType Coeff, ElementType Exponent, Polynomial PolyProd)
{
		Position P;

		P =PolyProd;
		while (P->Next != NULL && P->Next->Exponent >= Exponent)
			P = P->Next;
		Insert(Coeff, Exponent, PolyProd, P);
}


void DeletePolynomial(Polynomial Poly)
{
	Position P, Tmp;

	P = Poly->Next;
	Poly->Next = NULL;

	while (P != NULL) {
		Tmp = P->Next;
		free(P);
		P = Tmp;
	}
}
