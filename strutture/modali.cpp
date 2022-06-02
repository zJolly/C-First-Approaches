#include <iostream>
#include <cmath>
 using namespace std;
 //Valore globale della grandezza del vettore
 int N = 10;
 int main(){
 	int vet[N], popn = 0, temp = 0, popv = 0, c, count = 0;
 	//Inserimento vettore
 	for(int i = 0; i < N; i++)
	 {
	 	cout << "Inserisci valore: ";
	 	cin >> vet[i];
	 	system("cls");
	 }
	 //Ordinamento vettore
	 for(int i = 0; i < N - 1; i++)
 		for(int j = i+ 1; j < N; j++)
 			if(vet[i] >  vet[j])
 			{
 				c = vet[i];
 				vet[i] = vet[j];
 				vet[j] = c;
		 	} 
	//Selezione del modale
	 for(int i = 0; i < N; i++){
	 	temp = vet[i];
 		for(int j = i+ 1; j < N; j++)
 			if(temp == vet[j]){
 				count++;		
				}
			if( count > popv){
				popv = count;
				popn = temp;
			}
			 }
 
 cout << "Il numero modale e': " << popn << " con " << popv << " ripetizioni!" << endl;
 }
