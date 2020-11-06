#include "Nodo.h"

Nodo::Nodo(int n)
{
	this->numero = n;
	this->siguiente = NULL;
}

int Nodo::setNumero()
{
	return this->numero;
}

