

//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;

//fun��o insere: verifica se alista esta cheia e insere dados


// t � o tamalho atual da lista
//tamanho � o  tamanho total da lista(tamanho do vetor)
void insere(int codigo[], int &t, int tamanho)
{
	int prod;
	//se o tamalho atual for igual ao tamanho atual, seguinifica que esta cheia, preencheu o ultimo inde do vetor
	if(tamanho == t){
		cout << "\n Atencao! Lista cheia";
	}else{
		cout << "\nDigite codigo do produto a ser inserido: ";
		cin >> prod;
		//armazena o codigo(informa��o), no indece atual
		codigo[t] = prod;
		//acrescenta mais 1 a varevel t
		//t � passado por referencia ou seja, � modificada globalmente
		t++;
	}
}


//exibe os elementos

void exibe(int codigo[], int t)
{
	int x;
	//se t for igual a 0 siguinifica que ainda n�o foi inserido nada 
	if(t == 0){
		cout << "\n Atencao Lista vazia\n";
	}else{
		cout<<"\n Relacao dos Codigos\n";
		//exibe todos os codigos que est�o no vetor
		for(x=0; x<t; x++){
			cout << "\n" << x+1 << " - " << codigo[x];
		}
	}
}

//exibe um elemento da lista utlizando sua posi��o

void elemento(int codigo[], int t)
{
	int prod, posicao;
	if(t == 0){
		cout << "\n Atecao Lista vazia\n";
	}else{
		//a posica�ao � sem contar com o zero
		cout << "\nQual a posicao que deseja? ";
		cin >> posicao;
		//diminui 1, pois a posi��o armazenada n�o leva em consider��o o 0
		posicao --;
		//verifica se a posicao � = ou maior que o indece atual, ou seja se for o usario diitou uma posi��o incorreta
		if(posicao >= t){
			cout << "\n Atencao! Nehum codigo armazanado ou posicao inexistente\n";
		}else{
			//exibe o codio na tela
			cout << "\n codigo: " << codigo[posicao] << "\n";
		}
		
	}
}

//ordena pelo metodo de sele��o, .as poderia ser outro como ex: inser��o ou bolha
void ordena(int codigo[], int t)
{
	int x, y, aux, temp;
	if(t == 0){
		cout << "\n Atecao Lista vazia\n";
	}else{
		for(x=0;x<t-1; x++){
			aux=x;
			for(y=x+1; y<t; y++){
				if(codigo[aux]>codigo[y]){
					aux=y;
				}
				temp=codigo[aux];
				codigo[aux]=codigo[x];
				codigo[x] = temp;
			}
		}
		cout<<"\nLista Ordenada\n";
	}
}

int buscaSequencial(int codigo[], int cod, int t)
{
	int x;
	if(t == 0){
		return -1;//testa lista vazia
	}
	for(x = 0; x<t; x++)
	{
		if(codigo[x] == cod){
			return x;//retorna o deslocamento do endere�o base	
		}
	return -2;//percorreu toda a lista e n�o achou
	}
}

int main()
{
 int tam, codigoProduto[5], op;
	
	//inicializa��o
	tam = 0;
	do{
		cout<<"\n Menu - List \n";
		cout<<"\n0 - Renicia a Lista";
		cout<<"\n1 - Inserir codigo na Lista";
		cout<<"\n2 - Exibe Lista";
		cout<<"\n3 - Exibe tamanho da lista a Lista";
		cout<<"\n4 - Exibe um elemento da lista";
		cout<<"\n5 - Ordena elementos da lista";
		cout<<"\n6 - Procurar elementos da lista por Sequencial";
		cout<<"\n7 - Sair";
		cout<<"\nOpc: ";
		cin >> op;
		
		switch(op)
		{
			case 0:tam = 0;//reinicializa��o
				break;
			//vareavel tam � recebida pela varealve t das fun��es, e � alterada globalmete, pois a pasagem � por referencia
			//com essa variavel verificamos se a lista ta vazia pois ela armazena o indece atual.	
			case 1:insere(codigoProduto, tam, 5);
				break;
			case 2: exibe(codigoProduto, tam);
				break;
			case 3: cout<<"\n Tamanho da lista: " <<tam;
				break;
			case 4: elemento(codigoProduto, tam);
				break;
			case 5: ordena(codigoProduto, tam);	
				break;	
			case 6:
					int cod;
					int posicao;
					cout<< "Qual codigo a ser procurado? "; cin >> cod;
					posicao = buscaSequencial(codigoProduto, cod, tam);
					if(posicao == -1){
						cout << "\nAtencao Lista vazia\n";
					}
					else if(posicao == -2){
						cout << "\n Atencao! codigo nao encontrado\n";
					}else{
						cout<<"\nCodigo encontrado na posicao: "<< posicao+1<<"\n";
					}
					
					break;
			case 7: cout << "\n Finalizando o programa da Lista\n";
				break;
			default: cout << "\nOpcao invalida\n";
								
		}
		
	}while(op !=6);
	
}
