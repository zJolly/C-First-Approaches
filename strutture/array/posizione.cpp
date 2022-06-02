#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	int a[10], n;
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
	cout << "Ecco le posizioni del 5: " << endl;
	for(int i = 0; i < n; i++){
		if(a[i] == 5){
			cout << i << "' slot;" << endl;
		}
	}
	
	system("pause");
 }
