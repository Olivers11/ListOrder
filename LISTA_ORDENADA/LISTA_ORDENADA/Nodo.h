#pragma once
#include <iostream>
using namespace std;

class Nodo
{
private:
	int numero;
public:
	Nodo* siguiente;
	Nodo(int);
	int setNumero();
};

