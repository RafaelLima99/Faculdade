#include <iostream>
using namespace std;

//estrutura cad
struct cad
{
	int matricula;
};

//fun��o do tipo cad, e cad � uma estrutura que acabamos de criar
cad exibe();


int main()
{
	
 cad aluno; //declara��o de aluno
 
 aluno = exibe(); //estrutura aluno recebe o retorno da fun��o exibe
 

}


cad exibe() 
{
	cad aluno;
	aluno.matricula = 2020;
	cout << "A matricula do aluno e: " << aluno.matricula;
	
	return (aluno); //retorna a estrutura
}



