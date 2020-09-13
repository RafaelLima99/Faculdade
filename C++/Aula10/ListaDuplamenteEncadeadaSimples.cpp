#include <iostream>
using namespace std;

struct listaDE
{
	int info;
	struct listaDE *ant;
	struct listaDE *prox;	
};

//Prot�tiposlistaDE 
listaDE*insere(listaDE *LISTA, int valor);
void exibe(listaDE *LISTA);
listaDE *remove(listaDE *LISTA, int valor);
listaDE *busca (listaDE *LISTA, int valor);
int contaNos(listaDE *LISTA);
void libera(listaDE *LISTA);

int main()
{

	int op, valor;
	//inicializa a lista duplamente encadeada
	struct listaDE *lista= NULL; 
	
	do{
		system("cls");
		system("color 2f");
		cout<<"\n\n( () ) Alocacao Dinamica ( () )";
		cout<<"\n(                             )";
		cout<<"\n( 1-Insere na 1a posicao     )";
		cout<<"\n( 2-Remove da Lista DE       )";
		cout<<"\n( 3-Exibe a   Lista DE       )";
		cout<<"\n( 4-Conta Nos da Lista DE    )";
		cout<<"\n( 5-Libera a  Lista DE       )";
		cout<<"\n( 6-Sai                      )";
		cout<<"\n( Opcao:                      )";
		cout<<"\n(                             )";
		cout<<"\n( ( ) ) ( ( ) ) ( ( ) ) ( ( ) )\n";
		cin>>op;
		system("cls");
		system("color f2");
		switch(op){
			case 1:cout<<"\nDigite valor a ser inserido: ";
			cin>>valor;
			lista = insere(lista,  valor);
			break;
			case 2:if(!lista)cout << "\n\nNada a remover. Lista vazia\n";
			else {cout<<"\nDigite valor a ser removido: ";
			cin>>valor;
			lista=remove(lista, valor);
			}
			break;
			case 3: if(!lista)cout << "\n\nLista vazia\n";
			else exibe(lista);
			break;
			case 4:if(!lista)cout << "\n\nLista vazia\n";
			else cout<<"\nTotal de nos: "<< contaNos(lista);
			break; 
			case 5: if(lista)cout<<"\nTem elementos na Lista\n";
			else{ 
			libera(lista);cout<<"\nLiberando Memoria";
			}
			break;
			
			case 6: cout<<"Fechando Lista Duplamente Encadedada\n";
			break;
			
			default:cout<<"\nOpcao Invalida\n";
		}
		cout<<"\n\n"; system("pause");
	} while(op !=6);
	
	return 0;               	
}

//insere no in�cio 
listaDE *insere(listaDE *LISTA, int valor){
	listaDE* novo = new listaDE;
	novo->info = valor;
	novo->prox = LISTA;
	novo->ant = NULL;
	if (LISTA){
		LISTA->ant = novo;
	}
	return novo;
}

// exibe lista 
void exibe(listaDE *LISTA){
	listaDE* ptr;
	for (ptr=LISTA; ptr != NULL; ptr=ptr->prox){
		cout<<"\n"<<ptr->info;
	}
}

// remove um elemento da lista 
listaDE *remove(listaDE* LISTA, int valor){
	
listaDE *p = busca(LISTA,valor);
if (!p){ cout<< "\nValor nao achado\n"; return LISTA;} 
// nao achou o elemento
// retira elemento do encadeamento 
if (LISTA == p)LISTA = p->prox;
else{
	p->ant->prox = p->prox;
}
if (p->prox )p->prox->ant = p->ant;cout<<"\nValor removido\n";
delete p;return LISTA;
}

// busca valor na lista
listaDE *busca (listaDE *LISTA, int valor){
	listaDE *ptr;
	for (ptr=LISTA; ptr != NULL; ptr=ptr->prox){
		if (ptr->info == valor){
			return ptr;
			return NULL; // nao achou o elemento 
		}
	}
}

//conta n�s da Lista
int contaNos(listaDE *LISTA){
	int conta = 0;
	while (LISTA != NULL){
		conta++;LISTA = LISTA->prox;
	}
	return conta;
}

//libera 
void libera(listaDE *LISTA){
	delete LISTA;
	LISTA=0;
}
