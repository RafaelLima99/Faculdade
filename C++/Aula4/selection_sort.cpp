//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;

void selecao(int vet[], int tam)
{
	//vareaveis de controles
	int j, i, aux, temp;
	//cria um loop com repeti�oes apartir do tamanha do vetor
	//o -1 � utlizado porque o vetor inicia em 0, se eu colocar que um vetor tem 5 dados ele vai repetir 6 vezes ao invez de 5
	for(i=0; i<tam -1; i++){
		aux = i;
		//adciona +1 no i para o i iniciar em 1 e nao em 0, dessa forma, se o vetor tem 5 possi��es, esse for repete s� 4 vezes
		for(j=i+1; j<tam; j++) 
		{
			//verifica se a posi��o atual � maior que a posi��o ao lodo, ex: posi��o 0 � maior que posi��o 1 se for entra na condi��o	
			if(vet[aux] > vet[j])
			{
				//troca de velores entre a posi��es EX: valor da posi�ao 0 vai para a posi��o 1 e o valor da posi��o 1 vai para a posica�� 0
				aux=j;
				temp = vet[aux];
				vet[aux] = vet[i];
				vet[i] = temp;	
			}
		}			
	}
}

int main()
{
	int vet[] = {3,2,1};
	int tam= 3;
	selecao(vet, tam);
	
	//vetor depois da fun��o, orgganizados do menor para o maior
	cout << vet[0] << "\n";
	cout << vet[1] << "\n";
	cout << vet[2] << "\n";
	
}

