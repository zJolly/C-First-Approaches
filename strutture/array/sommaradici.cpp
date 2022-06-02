/*Scrivere in C++ un programma che permetta di Chiedere all’utente quanti numeri vuole inserire
Leggere i numeri inseriti dall’utente e calcolare la somma dei radici quadrate.
Esempio: L’utente vuole inserire 3 numeri: 4, 25 e 144
Il programma deve calcolare 2 + 5 + 12 =19*/
#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	float A[1000], tot;
	int f;
 	cout << "Quanti numeri vuoi inserire: ";
 	cin >> f;
 	system("cls");
 	for(int i = 0;i < f; i++){
 		cout << "Inserisci i numeri da sommare: ";
 		cin >> A[i];
	 	system("cls");
	 	//somma direatta
	 	A[i] = sqrt(A[i]);
	 	tot = A[i] + tot;
	 }
	 cout << "La somma e':" << endl << tot << endl;
	 system("pause");
	 system("cls");
 }
