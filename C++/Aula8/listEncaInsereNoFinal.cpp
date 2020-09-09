#include <iostream>
using namespace std;
struct nodo
{
	int num;
	nodo *prox;
};

int main()
{
	system("color 0A");
	
	nodo* no1 = new nodo;
	no1->num=13;
	no1->prox=NULL;
	
	nodo* no2 = new nodo;
	no1->prox=no2;
	no2->num = 20;
	no2->prox = NULL;
	
	//exibindo
	cout<<"\nValor do primeiro no: "<<no1->num;

	cout<<"\nValor do segundo no: "<<no2->num;
	

	cout<<"\n\nValor do endereco do primeiro no: "<<no1;
	cout<<"\n\nValor do endereco do segundo no: "<<no2;
	
	//liberando
	delete no1; no1=0;
	delete no2; no2=0;

	
	
	
}
