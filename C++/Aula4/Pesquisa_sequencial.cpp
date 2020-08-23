#include <iostream>
using namespace std;

void sequencial(int vetor[], int tamLinha)
{
	int varProcura;
	int posicao;
	cout << "\n digite numero que voce deseja pesquisar \n";
	cin >> varProcura;
	int achou=0;
	//cria um loopim de acordo com o tamanho do vetor
	//e também verifica se a variavel achou continiua com o valor "0"
	//pois se ela tiver seguinifica que ainda não foi encontrado nenhum dado
	for(int L=0; L<tamLinha && achou==0; L++ ){
		
		//verifica se o valor a ser pesquisado é igual ao valor do vetor nesse indece
		//se sim atribui 1 a variavel achou
		if(varProcura==vetor[L]){
			achou=1; 
			//armazena a posicao do vetor com o dado na variavel posicao
			posicao=L;	
		}
	}
	
	//verifica se a varivel achou é igual a 1, se for foi porque o vetor achou o dado
	if(achou == 1){

		cout << "A posicao do vetor que contem esse dado e: " << posicao;
		
	}else{
		cout << "\n dado nao achado";
	}
}

int main()
{
	int vet[] = {23, 28, 25};
	int tamLinha = 3;
	
	sequencial(vet, tamLinha);
	
}
