#include <iostream>
using namespace std;


//se n�o use o & 
//nao poderia alterar o valor dela globalmente, s� dentro do escopo da fun��o aletrav
//mas como esta pegando o endere�o, aletra em todo o escopo
void alteraV(int &v)
{	
	v = 200;

}

int main()
{
	int v = 100;
	cout << " valor antes da fun��o " << v;
	
	alteraV(v);
	cout << " valor depois da fun��o " << v;
	
}
