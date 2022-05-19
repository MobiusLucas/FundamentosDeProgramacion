// 12_05_22_Zap669_Practica9_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
#include <string>
int main()
{
	setlocale(LC_ALL, "spanish");
	std::string* titulos = NULL;
	int tamanio = 0;
	std::cout << "Cuantos Libros quieres almacenar? \n";
	std::cin >> tamanio;
	titulos = new std::string[tamanio];
	//Rellenar
	for (int i = 0; i < tamanio; i++) 
	{
		std::cout << "Ingresa el titulo del libro #" << i + 1 << std::endl;
		if (i == 0) {
			std::cin.ignore();
		}
		getline(std::cin, titulos[i]);
		system("CLS");
	}
	//mostrar
	for (int i = 0; i < tamanio; i++) 
	{
		std::cout << "El titulo del libro #" << i + 1 << " es " << titulos[i] << std::endl;
		
		
	}
	delete[]titulos;
	titulos = NULL;

}

