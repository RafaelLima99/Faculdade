#include <iostream>
using namespace std;

//estrutura cad
struct cad
{
	int matricula;
};

//função do tipo cad, e cad é uma estrutura que acabamos de criar
cad exibe();


int main()
{
	
 cad aluno; //declaração de aluno
 
 aluno = exibe(); //estrutura aluno recebe o retorno da função exibe
 

}


cad exibe() 
{
	cad aluno;
	aluno.matricula = 2020;
	cout << "A matricula do aluno e: " << aluno.matricula;
	
	return (aluno); //retorna a estrutura
}



