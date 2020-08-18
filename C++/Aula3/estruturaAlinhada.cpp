#include <iostream>
using namespace std;

struct data // nome da struct
{
	
int dia, mes, ano;

} ;


struct saude
{
	float peso, altura, IMC;
    data niver;
}aleta = {50, 1.60, 44.3};


int main()
{
	
//atribuindo o dia na estrutura suade que tem o menbro niver que é outra estrutura	
aleta.niver.dia = 25;

 cout << "Peso do atleta: " << aleta.peso << "\n";
 cout << "Peso do altura: " << aleta.altura << "\n";
 cout << "Peso do IMC: " << aleta.IMC << "\n";
 cout << "Peso do Dia: " << aleta.niver.dia << "\n";
 
}



