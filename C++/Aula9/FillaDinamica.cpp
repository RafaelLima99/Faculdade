#include <iostream>
using namespace std;

struct nodo
{
	int info;
	nodo *prox;	
};

nodo *insereFim(nodo *plista, int valor)
{
	nodo *novo, *aux;
	novo = new nodo;
	if(!novo){
		cout<<"\nNao foi possivel fazer Alocacao\n";
		system("pause");
		exit (1);
	}
	novo->info = valor;novo->prox= NULL;
	if (plista == NULL){
		plista = novo;
	}
	else{
		aux = plista;
		while (aux->prox )aux = aux->prox;
		aux->prox = novo;
		}
		return plista;
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

void exibePrimeiro(nodo *plista)
{
	if(!plista)cout << "\n\nFila vazia\n";
	else cout<<"\nValor do primeiro elemento da Fila: "<<plista->info;
}

void libera(nodo *plista){
	delete plista;
	plista=0;
} 

void exibeLista(nodo *plista){
  cout<<"\nListando\n";
  while(plista){
  	cout<<plista->info<<"\t";
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
		cout<<"\n= 1-Insere na Fila          	 =";  
		cout<<"\n= 2-Remove da Fila          	 =";
		cout<<"\n= 3-Exibe primeiro elemento   	 =";
		cout<<"\n= 4-Libera Fila             	 =";
		cout<<"\n= 5-Lista Fila -educativo   	 =";      
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
				lista = insereFim(lista, valor);
				break;
			case 2: if(!lista){
				cout << "\n\nNada a remover. Pilha vazia\n";
				}else{
					lista=remove(lista);
					 cout<<"\n\nPrimeiro elemento da Pilha removido\n"; 
				}
				break;
				       	
			case 3: if(!lista){
					cout <<"\n\nFILA vazia\n";
				}else{
					exibePrimeiro(lista);           
				}
				
				break;   
				
			case 4:if(lista){
				cout<<"\nTem elementos na Fila\n";
				}else{
				 libera(lista);cout<<"\nLiberando Memoria";
				}  
				break;
					
			case 5:if(!lista)cout<<"\nFila vazia\n";
				else exibeLista(lista); 
				break;
				
			case 6: cout<<"Fechando Fila Dinamica\n";           
				break;		       
		}
		
	system("pause");	
	}while(op != 6);
	
}


