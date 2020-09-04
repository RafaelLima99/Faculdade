#include <iostream>
using namespace std;
struct nodo
{
	int num;
	//o prox recebe a propria struct que ele esta inserido, nesse caso a struct nodo
	//prox é uma variavel ponteiro, e ela esta armazenando o endereço da strut
	nodo *prox;
};

int main()
{
	system("color 0A");
	//criando primeiro nó
	//o primeiro no utiliza  a struct de forma normal
	nodo *lista = new nodo;
	lista->num = 23;
	lista->prox=NULL;
	
	//criando o segundo nó
	//o segundo nó ja usa o ponteiro prox pois nele esta armazenado o endereçoda strcut
	//por isso acessamos a strcut depois o prox para depois acessar os mebros da struct que esta detro dele
	
	lista->prox = new nodo;
	lista->prox->num=13;
	lista->prox->prox=NULL;
	
	//exibindo
	cout<<"\nValor do primeiro no: "<<lista->num;
	//o valor do seundo no esta armazenado no proxy
	cout<<"\nValor do segundo no: "<<lista->prox->num;
	cout<<"\n\nValor do endereco do primeiro no: "<<lista;
	cout<<"\n\nValor do endereco do segundo no: "<<lista->prox;
	
	//liberando
	delete lista;
	cout<<"\n\nEndereco armazenado na variavel lista, mesmo depois do delete: "<<lista;
	lista = 0;
	cout<<"\nEndereco armazenado na varivael lista depois da atribuicao: "<<lista;
	cout<<"\n\n";
	
	
}
