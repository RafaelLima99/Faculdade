#include <iostream>
using namespace std;
// constante com o tamalhho da fila
#define TAM 5

struct queue
{
	//vetor circular com tamalho definido na constante TAM
	float circular[TAM];
	int total, inicio, fim;
	
};

//inserie na FIla, ou seja no final
void enfileira(queue &fil)
{
	float valor;
	//testa se a fila está cheia
	//verica se o menbro fim da strcut é igual a TAM - 1
	//se o fim ofr igual ao numero de posições suportada no array, seguinifica que a fila esta cheia
	if(fil.total == TAM){
		cout << "\n ATENCAO. Fila Cheia\n";
	}else{
		cout <<"Digite o valor a ser enfileirado: ";
		cin>>valor;
		fil.circular[fil.fim] = valor;
		fil.fim++;
		if(fil.fim == TAM){
			fil.fim = 0;
			fil.total++;
		}
		
	}
}

void desenfileira(queue &fil)
{
	//testando se a fila está vazia
	if(fil.total == 0){
		cout << "\n ATENCAO. Fila Vazia\n";
	}else{
		//exibe o valor removido
		cout << "\n Valor Removido: " <<fil.circular[fil.inicio];
		//atualiza o inicio da fila
		//acresenta mais 1 no mendo inicio, ou seja o primero indece da fila n esta 
		//mais na posicão 1 esta na posição 2 por exemplo.
		//desa forma o dado não é apagado, o que muda é que o inicio da fila se torna outro indece.
		//esse é um dos problemas da fila
		fil.inicio++;
		fil.circular[fil.inicio-1] =-999;
		if(fil.inicio == TAM){
			fil.inicio = 0;
			fil.total--;
		}
	}
}

void elemPrimeiro(queue &fil)
{
	if(fil.total == 0)
	{
		cout << "\nATENCAO. Fia Vazia\n";
	}else{
		//exibe o mebro f que é um mebro do tipo vetor da struct
		//na posição que é o valor armazenado no mebro inicio da struct, que armazena a posição do inicio da fila
		cout << "\n Elemento do inicio da fila: "<<fil.circular[fil.inicio];
	}
}

void situacaoFila(queue &fil)
{
	if(fil.inicio > fil.fim)
	{
		cout << "\nATENCAO. Fia Vazia\n";
	}else{
		//inicio mais 1 é porque o vetor inicia em 0
		cout << "\n Posicao do primerio elemento da Fila: " << fil.inicio<< "\n";

	}
}


int main()
{
	int op;
	int total;
	//armazena a struct queue na vareavel fila
	queue fila;
	//inicializa a pilha
	fila.inicio = 0;
	total = 0;
	fila.fim = 0;
	
	do{
		system("cls");
		system("color 0A");
		cout << "\n FILA (FIFO - Frist In - Frist Out)\n\n";
		cout << "\n1- Inserir um valor na Fila \n";
		cout << "\n2- Remover um valor da Fila \n";
		cout << "\n3- Mostrar o elemento do inicio da fila\n";
		cout << "\n4- Mostrar situacao da Fila\n";
		cout << "\n5- Sair\n";
		
		cout << "\nOpcao: ";
		cin >> op;
	
		switch(op){
			//passa a strct para a função
			case 1: enfileira(fila);
					 break;
			case 2: desenfileira(fila);
					 break;
			case 3: elemPrimeiro(fila);
					break;
			case 4: situacaoFila(fila);
					break;
			case 5: cout << "\n Programa encerrado \n";
					break;
			
		}
		
		cout << "\n\n";
		system("pause");
		
	}while(op!=5);
		
}
