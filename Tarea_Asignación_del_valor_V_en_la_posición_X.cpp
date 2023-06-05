#include<iostream>
#include<cstring>

// Funcion para asignar un valor en la posicion X del arreglo
void asignarValor(int* arreglo, int posicion, int valor)
{
	arreglo[posicion] = valor;
}

// Funcion para acceder al elemento en la posicion solicitada del arreglo
int accederElemento(const int* arreglo, int posicion)
{
	return arreglo[posicion];
}

int main()s
{
	// Definir el raw array inicial
	int arreglo[100];
	memset(arreglo, -1, sizeof(arreglo));
	// Solicitar la posicion y el valor al usuario
	int posicion, valor;
	std::cout << "ingrese la posicion:";
	std::cin >> posicion;
	std::cout << "ingrese el valor:";
	std::cin >> valor;

	//Asiganr el valor V en la posicion X 
	asignarValor(arreglo, posicion, valor);

	//Acceder al elemento en la posicion solicitada
	int elemento = accederElemento(arreglo, posicion);

	// Imprimir el arreglo actualizado y el elemento asignado
	std::cout << "\nArreglo actualizado:\n";
	for (int i = 0; i < 100; i++)
	{
		if (arreglo[i] == -1)
		{
			std::cout << i << " ";
		}
		else {
			std::cout << arreglo[i] << " ";
		}
	}
	std::cout << std::endl;
	std::cout << "Elemento en la posicion " << posicion << ": " << elemento << std::endl;
	return 0;
}
