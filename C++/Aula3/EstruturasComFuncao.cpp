#include <iostream>
using namespace std;
struct cad
{
	float a,b;
};

float maior(float, float);

int main()
{
	
	cad numeros = {10, 20};
	
	//pasagem por valor
	float resultado = maior(numeros.a, numeros.b);
	
	cout << "O maior numero e: " << resultado;	

 
}

float maior(float num1, float num2)
{
	if(num1 > num2){
		return num1;
	}else{
		return num2;
	}
}

