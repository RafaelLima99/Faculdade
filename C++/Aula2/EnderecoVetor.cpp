#include <iostream>
using namespace std;


int main()
{
	//sempre que passamos um vetor para uma fun��o ou 
	//imprimimos um vetor na tela, sempre oq ser� retornado � o seu endere�o
	//com o endere�o podemos modificar os dados do vetor em qualquer escopo
	// o "&" � utlizado para enviar para uma fun��o ou armazenar o ender�� de uma vareacel ou vetor
	// no caso dos vetores n�o � obriatorio usar o & para saber o endere�o, pois isso j� � feito automaticamente
	//mas se o caso for uma vareavel � necessario o & para saber seu endere�o
	int vet[] = {5, 4, 3, 2};
	int var = 20;
	cout << "o endereco do vetor e " << vet << "\n";
	cout << "o endereco do vetor e " << &vet << "\n";
	cout << "valor da vareavel e " << var << "\n";
	cout << "o endereco da vareavel e " << &var << "\n";
	
	
}
