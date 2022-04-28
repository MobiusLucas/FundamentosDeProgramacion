// 26_04_22_Zap669_P8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
//Inventario de Libros. Cuantos? 5

{
	string titulos[5];
	string auxanios;
	int anios[5];
	string autores[5];
	int contador;
	
	/*...*/
	for (contador = 1; contador <= 5; contador++ ){
	cout << "Ingresa el titulo del libro #"<< contador << endl;	
	cin.ignore();
	getline(cin, titulos[contador]);
	cout << "Ingresa el anio de publicacion del libro #" << contador << endl;
	cin >> auxanios[contador];
	if (isdigit(auxanios[contador])) {
		anios[contador] = auxanios[contador];
	 }
	else {
		cout << auxanios << "No es un numero valido, intenta de nuevo";
	}
	return 0;
	cout << "Ingresa el autor del libro #" << contador << endl;
	cin.ignore();
	getline (cin, autores[contador]);
	}

	for (int aux = 1; aux <= 5; aux++) {
	cout << "El titulo del primer libro es:" << contador << titulos[aux] << endl;
	cout << "El año de publicacion del libro es: " << contador << anios[aux] << endl;
	cout << "El autor del libro es: " << contador << autores[aux] << endl;
	}
 }

