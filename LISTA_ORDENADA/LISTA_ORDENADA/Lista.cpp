#include "Lista.h"



Lista::Lista()
{
	this->frente = NULL;
	this->final = NULL;
	this->tamanio = 0;
}

bool Lista::Vacia()
{
	return(this->frente == NULL and this->final == NULL) ? true : false;
}

void Lista::InsertarVacia(int n)
{
	Nodo* nuevo = new Nodo(n);
	this->frente = nuevo;
	this->final = nuevo;
	this->tamanio++;
}

void Lista::InsertarFinal(int n)
{
	Nodo* nuevo = new Nodo(n);
	this->final->siguiente = nuevo;
	this->final = nuevo;
	this->tamanio++;
}

void Lista::InsertarFrente(int n)
{
	Nodo* nuevo = new Nodo(n);
	nuevo->siguiente = this->frente;
	this->frente = nuevo;
	this->tamanio++;
}


void Lista::AnalizarInsercion(int n)
{
	if (this->Vacia())
	{
		this->InsertarVacia(n);
	}
	else
	{
		if (this->tamanio == 1)
		{
			if (n > this->final->setNumero())
			{
				this->InsertarFinal(n);
			}
			else if(n < this->frente->setNumero())
			{
				this->InsertarFrente(n);
			}
		}
		else
		{
			if (n > this->final->setNumero())
			{
				this->InsertarFinal(n);
			}
			else if (n < this->frente->setNumero())
			{
				this->InsertarFrente(n);
			}
			else
			{
				for (int i = 0; i < this->tamanio; i++)
				{
					if (this->ObtenerValorPosicion(i)->setNumero() > n)
					{
						//Insertar antes
						this->InsertarAntes(i, n);
						break;
					}
				}
				this->tamanio++;
			}
		}
		
	}
}

void Lista::InsertarAntes(int pos, int n)
{
	Nodo* aux = this->ObtenerValorPosicion(pos - 1);
	Nodo* aux2 = this->ObtenerValorPosicion(pos);
	Nodo* nuevo = new Nodo(n);
	aux->siguiente = nuevo;
	nuevo->siguiente = aux2;
}

Nodo * Lista::ObtenerValorPosicion(int pos)
{
	int cont = 0;
	Nodo* aux = this->frente;
	while (aux != NULL)
	{
		if (cont == pos)
		{
			break;
		}
		else
		{
			aux = aux->siguiente;
			cont++;
		}
	}
	return aux;
}

void Lista::Mostrar()
{
	Nodo* aux = this->frente;
	while (aux != NULL)
	{
		cout << aux->setNumero() << endl;
		aux = aux->siguiente;
	}
}



























