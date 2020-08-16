#include <iostream>
using namespace std;


int main()
{
	//sempre que passamos um vetor para uma função ou 
	//imprimimos um vetor na tela, sempre oq será retornado é o seu endereço
	//com o endereço podemos modificar os dados do vetor em qualquer escopo
	// o "&" é utlizado para enviar para uma função ou armazenar o enderçõ de uma vareacel ou vetor
	// no caso dos vetores não é obriatorio usar o & para saber o endereço, pois isso já é feito automaticamente
	//mas se o caso for uma vareavel é necessario o & para saber seu endereço
	int vet[] = {5, 4, 3, 2};
	int var = 20;
	cout << "o endereco do vetor e " << vet << "\n";
	cout << "o endereco do vetor e " << &vet << "\n";
	cout << "valor da vareavel e " << var << "\n";
	cout << "o endereco da vareavel e " << &var << "\n";
	
	
}
