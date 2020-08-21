

//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;

void insercao(int vet[], int tam)
{
	//variaveis de controle
	int j, i, aux;
	//inicia o for com o valor 1, pos a comparação é feita primeiro com o segundo elemento do vetor com o primeiro
	//por isso ja inicia o vetor em 1
	for (i=1; i<tam; i++)
	{
		aux = vet[i];
		//verifica se o indece do vetor a direita é menor que o da esquerda ex: vet[1] < vet[0]
		//verifica se o j > 0, pois a cada interação do for derementa -1
		//usando o >0 impede que o j tenha um valor negativo
		for(j=i; j>0 && aux <vet[j-1]; j--)
		{
			//vetor a direita recebe o valor do vetor a esquerda
			vet[j]=vet[j-1];
		}
		//quando a condição do for interno não é sastieita, é executado essa linha a baixo
		//vetor recebe o mesmo valor que estava antes, ou seja ele estava no lugar certo		
	    vet[j]=aux;	
	}	
}

int main()
{
	int vet[] = {3,2,1};
	int tam= 3;
	insercao(vet, tam);
	
	//vetor depois da função, orgganizados do menor para o maior
	cout << vet[0] << "\n";
	cout << vet[1] << "\n";
	cout << vet[2] << "\n";
	
}
