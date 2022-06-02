#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
	int A[30][30], r, c;
	//dichiarazione grandezza matrice
	cout << "Inserisci numero di righe della tabella:";
	cin >> r;
	system("cls");
	cout << "Inserisci numero di colonne della tabella:";
	cin >> c;
	system("cls");
	//loop inerimente matrice
	for(int i = 0;i < r; i++)
		for(int j = 0;j < c; j++){
			if(i == j){
				A[i][j]= 0;
			}
			else{
				A[i][j] = 1;
			}
		}
		//loop tabella visul
		for(int i = 0;i < r; i++){
			for(int j = 0;j < c; j++){
				cout << A[i][j] << "\t";
			}
		cout << endl;
		}
			
	
	
	
	
	
	
	system("pause");
	}
