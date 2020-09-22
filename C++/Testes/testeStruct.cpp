#include <iostream>
using namespace std;

struct teste {
	
	int idade;
	int diaN;
	
}; 

int main(){
	
	teste idade[2]; 
	idade[0] = {10, 20};
	idade[1] = {20, 10};
	cout <<"sua idade: "<< idade[1].idade <<"\n";
	cout <<"sua idade"<< idade[1].diaN <<"\n";
	
}
