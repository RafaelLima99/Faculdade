//organiza vetor em ordem do menor para o maior

#include <iostream>
using namespace std;



int main()
{
	
	int i = 0;
	while(i < 10){
		cout << i;
		i++;
		if(i/2 == 4){
			break;
		}
		cout << ", ";
	}
	
}
