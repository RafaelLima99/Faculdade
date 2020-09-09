#include <iostream>
using namespace std;

struct nodo
{
	int info;
	nodo *prox;	
};

nodo *insereFrente(nodo *plista, int valor)
{
	nodo *temp = new nodo;
	
	//se temp não existir
	if(!temp)
	{
		cout << "\n Nao foi possivel fazer Alocacao";
		system("pause");
		exit(1);
	}else{
		temp->info = valor;
		//plista tem o endereço do nó anterior
		//pois a varivel temp, a cada vez que essa função é executada
		//plista armazena o enedreço da struct
		//ess varivel é sobrescrita, por tanto o ultimo valor a ser inserido, fica em primeiro(plista->info)
		//os outros valores ficam dentro da variavel prox, que tem o endereçõ do nó anterior (plista->prox->info)
		//temp->prox->info exibiria o valor do nó anterior e assim sucessivamente
		temp->prox = plista;
	}
}

nodo *remove(nodo *plista)
{
	nodo *aux;
	aux = plista;
	//plista recebe o prox, ou seja ultimo valor alocado
	plista = plista->prox;
	delete aux;
	return plista;
}

void exibeTopo(nodo *plista)
{
	//vereifca se plista não exite
	if(!plista){
		cout << "\n\nPilha vazia\n";
		
	}else{
		//exibe o topo, ou seja o ultimo dado inserido
		//para exebir o nó anterior ao topo basta: plista->prox->info
		//para o 3: plista->prox->prox->info
		cout<<"\nValor do elemento do topo: \n"<<plista->info;
	}
}

void libera(nodo *plista){
	delete plista;
	plista=0;
} 

void exibeLista(nodo *plista){
  cout<<"\nListando\n";
  while(plista){
  cout<<"\n"<<plista->info;
  plista=plista->prox;
  }
} 

int main()
{
	int c, op, valor;
	nodo *lista = NULL;
	
	do
	{
		system("cls");
		system("color fc");
		cout<<"\n\n= = =  Alocacao Dinamica  = = =";
		cout<<"\n=                            	 =";
		cout<<"\n= 1-Insere na Pilha          	 =";  
		cout<<"\n= 2-Remove da Pilha          	 =";
		cout<<"\n= 3-Exibe elemento do topo   	 =";
		cout<<"\n= 4-Libera Pilha             	 =";
		cout<<"\n= 5-Lista Pilha -educativo   	 =";      
		cout<<"\n= 6-Sai                      	 =";
		cout<<"\n= Opcao:                     	 =";
		cout<<"\n=                             	 =";
		cout<<"\n= = = = = = = = = = = = = = = =\n"; 
		cin>>op;
		system("cls");
		system("color 4f");
		
		switch(op)
		{
			case 1: cout << "Digite o numero: ";
				cin >>valor;
				lista = insereFrente(lista, valor);
				break;
			case 2: if(!lista){
				cout << "\n\nNada a remover. Pilha vazia\n";
				}else{
					lista=remove(lista);
					 cout<<"\n\nPrimeiro elemento da Pilha removido\n"; 
				}
				break;
				       	
			case 3: exibeTopo(lista);
				break;   
				
			case 4:if(lista){
				cout<<"\nTem elementos na Pilha\n";
				}else{
				 libera(lista);cout<<"\nLiberando Memoria";
				}  
				break;
					
			case 5:if(!lista)cout<<"\nLista vazia\n";
				else exibeLista(lista); 
				break;
				
			case 6: cout<<"Fechando PILHA Dinamica\n";           
				break;		       
		}
		
	system("pause");	
	}while(op != 6);
	
}


