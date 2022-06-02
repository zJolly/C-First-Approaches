/*Scrivi un programma che svolge le seguenti operazioni:
o Acquisisce una sequenza di interi da tastiera e li memorizza in un array.
o Richiede all’utente un valore da cercare.
o Svolge la ricerca del valore inserito da utente
o Trovare il elemento minore
o elemento centrale e la sua posizione (indice)*/
#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	int A[200], f, ff, ric1, ric2 = 2000, pardisp, c = 0;
 	cout << "Quanti numeri vuoi inserire: ";
 	cin >> f;
 	system("cls");
 	for(int i = 0;i < f; i++){
 		cout << "Inserisci i numeri: ";
 		cin >> A[i];
	 	system("cls");
	 }
	 cout << "Che numero vuoi ricercare: ";
	 cin >> ric1;
	 system("cls");
	 cout << "Il numero che stai cercando si trova in questi indici: " << endl;
	 for(int i = 0;i < f; i++){
	 	if(A[i] == ric1){
	 		cout << i << "' indice;" << endl;
			 c = 1;	
		 }
	 }
	 if(c == 0){
	 	cout << "Nessun numero trovato!" << endl;
	 }
	 system("pause");
	 system("cls");
	  for(int i = 0;i < f; i++){
	  	if( ric2 > A[i]){
	  		ric2 = A[i];
		  }
	  }
	  cout << "Il numero piu' piccolo e': " << ric2 << endl;
	  system("pause");
	  system("cls");
	  pardisp = f%2;
	  if(pardisp == 0){
	  	cout << "Doppio indice essendo che e' pari: " << endl;
	  	ff = f/2;
	  	f = ff - 1;
	  	cout << "indice " << ff << " valore " << A[ff] << endl;
	  	cout << "indice " << f << " valore " << A[f] << endl;
	  }
	  else{
	  	cout << "Singolo indice essendo che e' dispari: " << endl;
	  	ff = f/2;
	  	cout << "indice " << ff << " valore " << A[ff] << endl;
	  }
	  system("pause");
	  system("cls");
 }
