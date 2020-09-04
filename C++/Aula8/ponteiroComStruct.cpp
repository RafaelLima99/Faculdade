#include <iostream>
using namespace std;

struct idade 
{
	int anoA, anoNas;	
};

int main()
{
	//duas variaveis do tipo idade(tipo idade por causa da struct idade criada)
	idade structIdade, *ptr;
	int atual, nasc;
	cout << "\nDigite o ano atual: ";
	cin >> atual;
	cout << "\nDigite o ano de seu nascimento: ";
	cin >> nasc;
	
	ptr = &structIdade;
	ptr->anoA = atual;
	ptr->anoNas = nasc;
 
	cout <<"\n\nsua idade e: "<< ptr->anoA - ptr->anoNas;
	
}
