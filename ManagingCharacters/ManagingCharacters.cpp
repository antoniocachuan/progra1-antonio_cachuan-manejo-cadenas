// ManagingCharacters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h> 

/*
Tests

test1
cadena = 120820166712

test2
cadena = 120820163400 

*/
using namespace std;

int main()
{
	//Entrada
	string cadena;
	string dia, mes, anio, codigoAscii;
	char tipoProducto;
	bool perecible;

	/*Restricciones
		La longitud debe ser de 11 dígitos
	*/

	//Lógica
	cout << "Ingrese el codigo de barras"<<endl;
	getline(cin, cadena);

	dia = cadena.substr(0, 2);
	mes = cadena.substr(2, 2);
	anio = cadena.substr(4, 4);
	codigoAscii = cadena.substr(8, 2);

	perecible = (cadena.substr(10, 2)=="00");
	tipoProducto = char(stoi(codigoAscii));

	//Salida
	cout << "Dia de vencimiento: " << dia << endl;
	cout << "Mes de vencimiento: " << mes << endl;
	cout << "Anio de vencimiento: " << anio << endl;
	cout << "El tipo de producto es: " << tipoProducto << endl;
	cout << "Producto perecible (0: No; 1: Si): " << perecible << endl;

	_getch();
}