#pragma once
#include "Nodo.h"
class Lista
{
private:
	int tamanio;
	Nodo* frente;
	Nodo* final;
public:
	Lista();
	bool Vacia();
	void AnalizarInsercion(int n);
	void InsertarFinal(int);
	void InsertarFrente(int);
	void InsertarAntes(int, int);
	void InsertarVacia(int);
	Nodo * ObtenerValorPosicion(int);
	void Mostrar();
};

