#include <iostream>
using namespace std;

//pasagem por referencia
void idadeMaisUm(int &idade);

struct cad
{
	int idade;
};



int main()
{
	
	cad aluno = {21};
	
	cout << "idade antes da funcao: "<< aluno.idade << "\n";
	
	 idadeMaisUm(aluno.idade);
	
	cout << "idade depois da funcao: "<< aluno.idade;
	//pasagem por valor

}

//pasagem por referencia
void idadeMaisUm(int &idade) 
{
	idade = idade + 1;
	
}



