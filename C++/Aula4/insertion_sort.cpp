

//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;

void insercao(int vet[], int tam)
{
	int j, i, aux;
	for (i=1; i<tam; i++)
	{
		aux = vet[i];
		for(j=i; j>0 && aux <vet[j-1]; j--)
		{
			vet[j]=vet[j-1];
		}		
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
