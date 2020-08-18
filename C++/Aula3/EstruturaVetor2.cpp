#include <iostream>
using namespace std;

struct numeros // nome da struct
{
	
int num1, num2; //vareaveis que recebem o valor da vareavel prod

};
numeros vet[2];


int main()
{

  vet[0].num1 = 10;
  vet[0].num2 = 20;
  
  vet[1].num1 = 30;
  vet[1].num2 = 40;

cout << vet[0].num1 << "\n";
cout << vet[0].num2 << "\n";

cout << vet[1].num1 << "\n";
cout << vet[1].num2 << "\n";

 	

 
}



