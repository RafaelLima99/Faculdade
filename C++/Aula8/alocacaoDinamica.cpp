#include <iostream>
using namespace std;

int main()
{
	//Declara e atribuiu o valor 1024ao endere�o apontado pela variavel ponteiro
	//o endere�o que a variavel ponteiro recebe � o endere�o onde foi armazenado o valor que no caso � o valor 1024
	int *ponteiro = new int(1024);
	cout <<"\n o valor que foi iniciaizado foi: "<<*ponteiro;
	
	// um ponteiro com valor 0 � um ponteiro nulo
	if(ponteiro == 0){
		cout <<"\nAlocacao nao realizada";
	}
	
	
	
}
