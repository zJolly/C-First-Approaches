#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
	char A[30][30];
	int q, d ;
	//dichiarazione grandezza matrice
	cout << "Inserisci numero del quadrato:";
	cin >> q;
	d = q;
	system("cls");
	//loop inerimento retta principale
	for(int i = 0;i < q; i++)
		for(int j = 0;j < q; j++){
			if(i == j){
				A[i][j]= '+';
			}
			else{
				A[i][j] = '-';
			}
		}
		//loop inerimento retta secondaria
		for(int i = 0;i < q; i++)
			for(int j = 0;j < q; j++){
				if(j+i == q-1){
					A[i][j]= '+';
				}
			}
		//loop tabella visul
		for(int i = 0;i < q; i++){
			for(int j = 0;j < q; j++){
				cout << A[i][j] << "\t";
			}
		cout << endl;
		}
}
			
