#include <iostream>
#include <cmath>
 using namespace std;
 int r = 3;
 
 int main(){
  	int vet[r][r], maxy[r];
  	for(int i = 0; i < r;i++)
		for(int j = 0; j < r; j++){
		cout << "Inserisci numero:";
		cin>>vet[i][j];
		maxy[i] = -10000;
		}
		system("cls");
	for(int i = 0; i < r;i++)
		for(int j = 0; j < r; j++){
			if(maxy[i] < vet[i][j]){
				maxy[i] = vet[i][j];
			}
		}
		cout << "Tabella dei numeri:";
		for(int i = 0; i < r;i++){
			cout << endl;
			for(int j = 0; j < r; j++){
				cout << vet[i][j] << "\t";
			}
			cout  << "Max: " << maxy[i];
		}
 }
