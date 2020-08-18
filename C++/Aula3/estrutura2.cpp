#include <iostream>
using namespace std;

struct coordenadas // nome da struct
{
int x, y; //vareaveis que recebem o valor da vareavel prod

} prod = {10, 20}, prod2 = {30, 40}; //varevel que adciona os valores as vareaveis x e y

int main()
{

//para acessar um meboro da estrutura, basta colocar o nome da varevael que contem os dados e 
//utlizar o operador "." e colocar o nome da varevel que está dentro da estrutura

//dados da varevel prod
cout << prod.x << "\n"; 
cout << prod.y << "\n"; 

//dados da varevel prod2
cout << prod2.x << "\n"; 
cout << prod2.y << "\n"; 

}

