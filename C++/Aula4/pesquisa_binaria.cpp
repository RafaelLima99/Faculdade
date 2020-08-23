#include <iostream>
using namespace std;

void binaria(int vetor[], int tam)
{
	int inicio = 0;
	int fim = tam - 1;
	int meio;
	int procura;
	procura = 2;
	
	meio = (inicio+fim)/2;
	
	while(procura != vetor[meio] && inicio != fim){
		if(procura > vetor[meio]){
			inicio=meio+1;
		}else{
			fim=meio;
			meio=(inicio+fim)/2;
		}
	}
	if(vetor[meio] == procura){
		cout << "o indece do vetor que contem o dado e: " <<meio<<endl; 
	}else{
		cout << "\n Dado nao encontrado";
	}		
}
	
int main()
{
	int vet[] = {1, 2, 5};
	int tam = 3;
	
	binaria(vet, tam);
	
}
