#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	int a[10], n, tot = 0;
 	do{
 		cout << "Quanti numeri vuoi inserire[max 10]: ";
 		cin >> n;
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
	cout << "Ecco la lista dei numeri: " << endl;
	for(int i = 0; i < n; i++){
		tot = tot+a[i];
	}
	cout << "Somma: " << tot << endl;
	
	system("pause");
 }
