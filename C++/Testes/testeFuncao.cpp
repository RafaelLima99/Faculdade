#include <iostream>
using namespace std;

funcaoTeste(string nome, int dataA, int dataN){
	int idade = dataA - dataN;
	cout << "Nome: "<< nome <<"\n";
	cout << "Tem idade: " << idade;
}

int main(){
	
	string nome = "Rafael";
	int dataA = 2020;
	int dataN = 1999;
	
	funcaoTeste(nome, dataA, dataN);
	
	
}
