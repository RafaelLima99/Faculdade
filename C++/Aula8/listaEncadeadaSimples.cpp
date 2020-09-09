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
	//o primeiro no utiliza a struct de forma normal
	nodo *lista = new nodo;
	//adciona 23 ao mebro num da strcut
	lista->num = 23;
	//adciona o valor do menbro prox como null
	lista->prox=NULL;
	
	//criando o segundo nó
	//o segundo nó ja usa a variavel ponteiro prox, pois nele esta armazenado o endereçoda strcut
	//acessamos primeiro a strcut para depois acessar o menbro, prox para depois acessar os mebros da struct que esta detro de prox
	lista->prox = new nodo;
	lista->prox->num=13;
	//acessando a strcut por meido da varivel prox  que tem o endereço da strcut
	lista->prox->prox=NULL;
	
	//criando terceiro nó
	lista->prox->prox = new nodo;
	lista->prox->prox->num=14;
	//acessando a strcut por meido da varivel prox  que tem o endereço da strcut
	lista->prox->prox->prox = NULL;
	
	//exibindo
	cout<<"\nValor do primeiro no: "<<lista->num;
	//o valor do seundo no esta armazenado no proxy
	cout<<"\nValor do segundo no: "<<lista->prox->num;
	cout<<"\nValor do terceiro no: "<<lista->prox->prox->num;
	cout<<"\n\nValor do endereco do primeiro no: "<<lista;
	cout<<"\n\nValor do endereco do segundo no: "<<lista->prox;
	cout<<"\n\nValor do endereco do terceiro no: "<<lista->prox->prox;
	
	//liberando
	delete lista;
	cout<<"\n\nEndereco armazenado na variavel lista, mesmo depois do delete: "<<lista;
	lista = 0;
	cout<<"\nEndereco armazenado na varivael lista depois da atribuicao: "<<lista;
	cout<<"\n\n";
	
	
	
}
