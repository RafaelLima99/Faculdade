#include <iostream>
using namespace std;

int main()
{
	//Declara e atribuiu o valor 1024ao endereço apontado pela variavel ponteiro
	//o endereço que a variavel ponteiro recebe é o endereço onde foi armazenado o valor que no caso é o valor 1024
	int *ponteiro = new int(1024);
	cout <<"\n o valor que foi iniciaizado foi: "<<*ponteiro;
	
	// um ponteiro com valor 0 é um ponteiro nulo
	if(ponteiro == 0){
		cout <<"\nAlocacao nao realizada";
	}
	
	
	
}
