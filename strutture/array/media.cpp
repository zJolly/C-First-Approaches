#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 //media approsiamativa...
 
 int main(){
 	int a[10], n, tot = 0, med = 0;
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
	for(int i = 0; i < n; i++){
		tot = tot+a[i];	
	}
	med = tot/n;
	cout << "la media: " << med << endl;
	
	system("pause");
 }
