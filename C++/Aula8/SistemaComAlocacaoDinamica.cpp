#include <iostream>
using namespace std;

int main()
{
	int op, n, x, f1, f2;
	//variavel ponteiro
	float *alunos;
	
	do{
		system("color 0A");
		cout << "\n\n--------Alocacao Dinamica ---------";
		cout <<"\n 1- Insere numero de alunos";
		cout <<"\n 2- Insere notas";
		cout <<"\n 3- Exibe";
		
		cout <<"\n Opção: ";
		cin >> op;
		
		switch(op){
			case 1:	cout << "\nDigite o numero de alunos: ";
					cin >>n;
					//variavel ponteiro alunos recebe um endereo de um arry float, que foi alocado dinamicamente
					//o array contem a quantiade de indece detro dele "[n]"
					alunos = new float[n];
					if(alunos == 0){
						cout<<"\nNao foi possivel fazer Alocacao\n";
						return 1;
					}
					f1 = 1;
					break;
			case 2: 
				if(f1 == 1){
					for(x=0; x<n; x++)
					{
						cout <<"\nDigite a nota: ";
						cin>>alunos[x];						
					}
					
					f2=1;
				}else{
					cout<<"\nVoce nao determinou a quantidade";
				}
				break;
			case 3:
				if(f2 == 1){
					cout << "\nRelcao de notas \n";
					for(x=0;x<n;x++){
						//não se utliza o * em um ponteiro que tem um endereço de um array
						//isso é proprio da linguagem
						cout<<"\n Nota"<<x<<": "<<alunos[x];
					}
				}else{
					cout <<"Nao foi adcionado nehuma nota";
				}			
		}
				
		
	}while(op !=3);
	
	
}
