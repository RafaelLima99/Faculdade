#include <iostream>
using namespace std;
#define TAM 40
//insere

void empilha(int p[], int &t, int v)
{
	//se topo for igual a constante TAM (contem o tamanho da pilha) siguinifica que a pilha esta cheia
	if(t == TAM -1){
		cout << "\nAtencao pilha cheia!\n";
	}else{
		t++; //atualiza o topo
		p[t] = v; //recebe valor
	}
}

//remove
int desempilha(int p[], int &t, int &v)
{
	// se o topo for = a -1 siguinifca que está vazia
	if(t == -1){
		return 0;
		
	}else{
		v=p[t];//guarda o valor topo
		
		//atualiza o topo, decrementado 1, ou seja retirando um indece do vetor
		//pois o topo armazana o indece do ultimo indece a receber um valor, decrementando, esse indesse deixa de existir
		t--; 
		return 1;
	}
}

//exibe o elemento que esta no topo da pilha(no caso o ultimo valor que foi add)
//pois o ultimo que entra é o primeiro que sai, entt o ultimo numero a ser add é o primeiro do topo
void acessoTopo(int p[], int &t)
{
	if(t == -1){
		cout<<"\n Atencao Pilha Vazia!\n";
	}else{
		cout<<"\nElemento do topo da pilha: "<< p[t];
	}
}


//mostra a situação da pilha
void situacaoPilha(int p[], int &t)
{
	if(t == -1){
		cout<<"\n Atencao Pilha Vazia!\n";
	}else if(t == TAM - 1){
		cout<<"\n Atencao Pilha Cheia!\n";
	}else{
		//t é o indece do ultimo numero a ser add, acrecenta mais 1 por causa que o vetor inicia em zero
		cout<<"\nTotal de elementos na pilha: "<<t+1<<"\n";
		//tamanhho - o total de elementos
		cout<<"\n\nEspaco disponivel na pilha "<<TAM -(t+1)<<"\n";
	}
}

int main()
{
	int op, val, top=-1, pilha[TAM],resp;
	
	do{
		system("color 0A");
		cout <<"\nPilha (LIFO  Last in - Frist Out)\n\n";
		cout<<"\n1- Inserir valor na pilha";
		cout<<"\n2- Remove um valor da pilha";
		cout<<"\n3- Mostrar o elemento do topo da pilha";
		cout<<"\n4- Mostra situacao da pilha";
		cout<<"\n5- Sair";
		cout<<"\n Opcao: ";
		cin >> op;
		
		switch(op){
			case 1:
				cout<<"Digite o valor que vai ser emplilhado: ";
				cin>>val;
				empilha(pilha, top, val);
				break;
			case 2:
				resp = desempilha(pilha, top, val);
				if(resp == 0){
					cout<<"\nAtencao Pilha vazia\n";
				}else{
					cout<<"\nValor removido: "<<val;
				}
				break;	
			case 3:
				acessoTopo(pilha, top);
				break;
			case 4:
				situacaoPilha(pilha, top);
				break;
			case 5:
				cout<<"\nPrograma Finalizado\n";
				break;		
		}
		
	}while(op!= 5);	
}
