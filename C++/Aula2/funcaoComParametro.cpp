#include <iostream>
using namespace std;

// os parametros de uma função sempre tem que ter seus tipos declarados
void calculaIdade(int anoA, int anoN)
{
	int idade = anoA - anoN;
	cout << "Sua idade e: " << idade;
}

int main()
{
 
 int anoA = 2020;
 int anoN = 1999;
 
 calculaIdade(anoA, anoN);
}
