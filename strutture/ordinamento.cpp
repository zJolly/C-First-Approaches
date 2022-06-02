#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	int i, j , comodo, Vet[10], N;
 	cout << "Inserisci quanti numeri vuoi: (MAX 10) ";
 	do{
	 cin >> N;
 	 system("cls");
	 }while(N > 10 || N < 0);
 	
 	for(i = 0; i < N; i++)
	 {
	 	cout << "Inserisci valore: ";
	 	cin >> Vet[i];
	 	system("cls");
	 }
 	for(i = 0; i < N - 1; i++)
 		for(j = i+ 1; j < N; j++)
 			if(Vet[i] >  Vet[j])
 			{
 				comodo = Vet[i];
 				Vet[i] = Vet[j];
 				Vet[j] = comodo;
		 	}
	cout << "Ecco il vettore ordinato:" << endl;
	for(i = 0; i < N; i++)
	{
	 	cout << Vet[i] << endl;
	}
	system("pause");
	system("cls");			 
 }
