/*Scrivere un programma che crei un array (vettore) di massimo 20 numeri interi, lo stampi a
video, lo modifichi azzerando tutti gli elementi in posizione di indice pari e quindi stampi l'array
modificato*/
#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	int A[20], f, n = 1;
 	cout << "Quanti numeri vuoi inserire: ";
 	cin >> f;
 	system("cls");
 	for(int i = 0;i < f; i++){
 		cout << "Inserisci i numeri da sommare: ";
 		cin >> A[i];
	 	system("cls");
	 }
	 cout << "Ecco il vettore normale!" << endl;
	 for(int i = 0;i < f; i++){
	 	cout << A[i] << endl;
	 }
	 system("pause");
	 system("cls");
	  for(int i = 0;i < f; i++){
	  	if(i == n){
	  		n = n + 2;
	  		A[i] = 0;
		  }
	  }
	  cout << "Ecco l'arrey sistemato: " << endl;
	  for(int i = 0;i < f; i++){
	  	cout << A[i] << endl;
	  }
 
 }
