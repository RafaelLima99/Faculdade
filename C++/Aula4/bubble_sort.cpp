

//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;

void bolha(int vet[], int tam)
{
	int j, i, aux;
	
	for(i=0; i<tam -1; i++)
	{
		for(j=tam -1; j>i; j--)
		{
			//verifica se o indice a direita � maior que o da esqueder
			//obs: essa vefica��o come�a primeiro do ultimo indece do vetor 
			// ou seja de baixo para cima, come�ando do ultimo indece para o primeiro
			//por isso � chamado de bolha, pois as bolhas come�am em baixo e depois v�o pra a superice da �gua
			if(vet[j] < vet[j-1])
			{
				aux=vet[j];
				vet[j] = vet[j-1];
				vet[j-1] = aux;
			}

		}	
	}
}

int main()
{
	int vet[] = {3,2,1};
	int tam= 3;
	bolha(vet, tam);
	
	//vetor depois da fun��o, orgganizados do menor para o maior
	cout << vet[0] << "\n";
	cout << vet[1] << "\n";
	cout << vet[2] << "\n";
	
}
