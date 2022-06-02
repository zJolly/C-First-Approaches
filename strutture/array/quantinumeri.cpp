#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	int a[10], n, zer = 0;
 	do{
 		cout << "Quanti numeri vuoi inserire[max 10]: ";
 		cin >> n;
 		system("cls");
 		if(n > 10){
 			cout << "Vuoi inserire piu' di 10 numeri... non puoi!!!" << endl;
 			system("pause");
 			system("cls");
		 }
 	}while(n > 10);
 	for(int i = 0; i < n; i++){
 		cout << "Inserisci numero: ";
 		cin >> a[i];
		 system("cls"); 	
		 }
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			zer++;
		}
	}
	cout << "Ci sono " << zer << " zeri nel mio arrey!" << endl;
	
	system("pause");
 }
