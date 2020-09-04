#include <iostream>
using namespace std;

int main()
{
	int ano = 1989, *ptrAno;
	ptrAno = &ano;
	
	cout <<"\nConteudo da variavel ano: "<<ano;
	cout <<"\n\nEndereco da variavel ano: "<<&ano;
	cout <<"\n\nConteudo da variavel ptrAno: "<<ptrAno;
	cout <<"\n\nEndereco da variavel ponteiro: "<<&ptrAno;
	cout <<"\n\nConteudo do endereco apontado pela variavel ptrAno: "<<*ptrAno;
}
