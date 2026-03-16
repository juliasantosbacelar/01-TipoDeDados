// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/1)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows

	
	//ex 02:

	double celsius, farenheit, kelvin;

	cout << "Digite a temperatura em Celsius:" << "\n";
	cin >> celsius;

	farenheit = (celsius * 1.8) + 32;
	kelvin = celsius + 273.15;


	cout << "A temperatura em Farenheit: " << farenheit << "\n";
	cout << "A temperatura em Kelvin: " << kelvin << "\n";

	//ex 03:

	long seg;
	cout << "Digite o valor em segundos: " << "\n";
	cin >> seg;

	double min = seg / 60;

	double horas = min / 60;

	double dias = horas / 24;

	double segRestante = seg % 60;
	
	cout << "O valor digitado equivale a " << min << " minutos " << horas << " horas " << dias << " dias e " << segRestante << "Segundos" << "\n";

	//ex 04:

	cout << "Digite um valor inteiro da var" << "\n";

	int qualquerValor;
	cin >> qualquerValor;

	int* ponteiro = &qualquerValor;


	cout << "O valor da var: " << qualquerValor << "\n";
	cout << "O endereco dessa var: " << &qualquerValor << "\n"; 

	//Dobrando pelo ponteiro
	*ponteiro = qualquerValor * 2; 

	cout << "Dobrando o valor atraves do ponteiro " << qualquerValor << "\n";
	


}

