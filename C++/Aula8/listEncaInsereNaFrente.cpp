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
	
	nodo *temp, *lista=NULL;
	
	//primeiro nó
	temp = new nodo;
	temp->num =23;
	temp->prox=lista;
	lista = temp;
	
	//segundo nó
	temp = new nodo;
	temp->num = 13;
	temp->prox=lista;
	lista = temp;
	
	
	//como é uma sobreposição de variaveis, o valor do ultimo nó é o primeiro a ser alocado e exibido
	//terceiro nó
	temp = new nodo;
	temp->num = 15;
	temp->prox=lista;
	lista = temp;
	
	//exibindo
	cout<<"\nValor do primeiro no: "<<temp->num;
	//o valor do seundo no esta armazenado no proxy
	cout<<"\nValor do segundo no: "<<temp->prox->num;
	cout<<"\nValor do terceiro no: "<<temp->prox->prox->num;
	


	
	//liberando
	delete lista; lista=0;
	

	
	
}
