// LISTA_ORDENADA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Lista.h"

#define CLEAR system("cls")
#define PA system("pause")

int main()
{
	int opcion;
	Lista a = Lista();
	do
	{
		CLEAR;
		cout << "INsertar numero \n";
		cout << "ver Numeros \n";
		cout << "Salir \n";
		cin >> opcion;
		if (opcion == 1)
		{
			CLEAR;
			int n;
			cout << "Numero: ";
			cin >> n;
			a.AnalizarInsercion(n);
			PA;
		}
		else if (opcion == 2)
		{
			CLEAR;
			cout << "|	NUMEROS	 " << endl;
			a.Mostrar();
			PA;
		}
	} while (opcion != 3);


}
