#include <iostream>
using namespace std;

int main()
{
	int *pt = new int[3];
	//quando adcionamos + 1 a um ponteiro ele se desloca de tantos bits quannto for do tipo do dado
	//temos uma variavel ponteiro com 3 deslocamentos, um ao lado do outro
	
	*(pt) = 34;
	*(pt + 1) =55;
	*(pt + 2) = 90;
	
	//*(pt) ou *pt são as mesmas coisas pois tanto *(pt) quanto *pt representaõ a primeira posicçao do deslocamento 
	cout << "\n "<<*pt<< "seu endereco: " << &pt;
	cout << "\n " <<*(pt+1)<< "seu endereco: " << &pt+1;
	cout << "\n " << *(pt+2)<< "seu endereco: " << &pt+2;;
	
	
}
