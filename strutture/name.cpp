#include <iostream>
#include <cmath>
#include <string.h>
 using namespace std;
 
 int main(){
 	char Nome[50];
 	cout << "Inserisci il Nome di Colombo: ";
 	gets(Nome);
 	system("cls");
 	if(!strcmp("Cristoforo", Nome) || !strcmp("cristoforo", Nome))
	 {
 		cout << "Perfetto! Nome giusto" << endl;		
	 }
 	else
	 {
	 	cout << "Mi dispiace. Non ricordi bene il nome" << endl;	
	 }
 	system("pause");
 	system("cls");
 }
