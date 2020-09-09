#include <iostream>
using namespace std;

struct nodo
{
	int info;
	struct nodo *prox;
};

nodo *insereFrente(nodo *ptr, int valor);
nodo *insereFim(nodo *ptr, int valor);
void  exibe(nodo *ptr);
nodo *removeFrente(nodo *ptr);
nodo *removeFim(nodo *ptr);
//void substituiNo(nodo *ptr, int posicao, int novoValor);
//int buscaSequencial(nodo *ptr, int valor);
//void libera(nodo *ptr);
//nt contaNos(nodo *ptr);

int main()
{

	int c,op, valor,pos, nvalor, resp;
	nodo *lista=NULL;   
	
	do
	{
		system("color f1");
		cout<<"\n\n< < <  Alocacao Dinamica  < < <"; 
		cout<<"\n";
		cout<<"\n< 1-Insere Frente - Lista "; 
		cout<<"\n< 2-Insere Fim - Lista "; 
		cout<<"\n< 3-Remove Frente - Lista"; 
		cout<<"\n< 4-Remove Fim - Lista";  
		cout<<"\n< 5-Exibe Lista ";    
		cout<<"\n< 6-Substitui No na Lista ";  
		cout<<"\n< 7-Conta Nos da Lista ";
		cout<<"\n< 8-Busca na  Lista "; 
		cout<<"\n< 9-Libera Lista ";        
		cout<<"\n< 10-Sai ";
		cout<<"\n< Opcao: ";
		cout<<"\n<                             ";  
		cout<<"\n\n"; 
		cin>>op;
		
		switch(op){
				system("pause");	
				
			case 1:cout<<"\nInserir na frente: ";
				cin>>valor;
				lista = insereFrente(lista, valor);
				break;
				
			case 2:cout<<"\nInserir no final: ";
				cin>>valor;
				lista = insereFim(lista, valor);
				break;
			case 3:if(!lista){
				
				cout << "\n\nNada a remover. Fila vazia\n";
				
				}else{
				lista=removeFrente(lista); 
				cout<<"\n\nPrimeiro elemento da Fila removido\n";   
				}
				break;
			case 4:if(!lista){
				
				cout << "\n\nNada a remover. Fila vazia\n";
				
				}else{
					lista=removeFim(lista); 
					cout<<"\n\nUltimo elemento da Fila removido\n";   
				}
				break;
			case 5:if(!lista){
				
				cout << "\n\nFILA vazia\n";
				}else{
				
					exibe(lista);  
				}
				break;
			}
				
						
	system("pause");	
	}while(op != 6);
	
	
}

nodo *insereFrente(nodo *ptr, int valor){
	//vareavel temp recebe o endereço da struct nodo, que acabou de ser alocada dinamicamente
	nodo * temp = new nodo;
	//verifica se a vareavel temp é nulla, se for entra na condição
	//se ler: não temp, ou seja se temp n exitir
	if(!temp){
		cout<<"\nNao foi possivel fazer Alocacao\n";
		system("pause");exit (1);
	}
	//menbro info recebe o valor digitado
	temp->info = valor;
	//o menbro prox recebe a vareavel ponteiro ptr, que contem o endereço da struct nodo
	//o prox recebe o endereço do intem anterior a esse
	temp->prox = ptr;
	return temp;       
}

nodo* insereFim(nodo *ptr, int valor){
	//vareavel novo é uma varevel ponteiro do tipo nodo, nodo é uma struct
	nodo *novo, *aux; 
	//varevel ponteiro nodo recebe o endereço da struct nodo que foi alocada dinamicameent
	novo = new nodo;
	//verifica se foi possivel alocar
	if(!novo){
	cout<<"\nNao foi possivel fazer Alocacao\n";
	system("pause");
	exit (1);
	}
	//acessa o menbro info da struct e adciona o valor digitado
	novo->info = valor;
	//acessa o menro prox e adciona null
	novo->prox = NULL;
	
	//se ptr for null
	//se for null, siguinifica que o valor a ser armazenado é o primeiro nó
	if (!ptr)
	{
		//recebe o endereço da varivael novo que é do tipo da struct nodo
		ptr = novo;	
	}
	//se ptr existir, cai no else, e siguinifica que a existe um nó anterior
	else{ 
		aux = ptr;
		while (aux->prox){
				aux = aux->prox;
		}

		aux->prox = novo;
	}
		return ptr;
}

void exibe(nodo *ptr){ 
	cout<<"\nListando\n";
	//enquanto ptr for diferente de null
	while(ptr){
		cout<<"\n"<<ptr->info<<"\n\n";
		//ptr recebe a strcut que esta em prox
		//e assim sucessecivamente
		// equivale a ptr->prox; ptr->prox->prox; e assim sucessivamente 
		ptr=ptr->prox;
		}
}

nodo *removeFrente(nodo *ptr){
	nodo *aux;
	aux = ptr;
	ptr = ptr->prox;
	delete aux;
	return ptr;
}

nodo* removeFim(nodo *ptr){
	nodo * aux, *ultimo;
	if (!ptr->prox) {
		delete ptr;ptr = NULL;
		return ptr;
	}else{
		aux = ptr;
		while (aux->prox->prox )  //aux caminha até apontar para o penultimo nó
		aux = aux->prox;ultimo = aux->prox;
		delete ultimo;aux->prox = NULL;
		return ptr;
		} 	   
}


