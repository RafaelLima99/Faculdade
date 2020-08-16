#include <iostream>
using namespace std;


//se não use o & 
//nao poderia alterar o valor dela globalmente, só dentro do escopo da função aletrav
//mas como esta pegando o endereço, aletra em todo o escopo
void alteraV(int &v)
{	
	v = 200;

}

int main()
{
	int v = 100;
	cout << " valor antes da função " << v;
	
	alteraV(v);
	cout << " valor depois da função " << v;
	
}
