#include <iostream>
using namespace std;



struct cad
{
	int matricula;
};

void exibe(cad aluno);

int main()
{
	
 cad aluno = {2019};
 
 //pasando uma estruta para uma fun��o
 exibe(aluno);

}


void exibe( cad aluno) 
{
	cout << "A matricula do aluno e: " << aluno.matricula;
	
}



