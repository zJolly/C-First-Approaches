#include <iostream>
#include <cmath>
 using namespace std;
 
 struct data{ //nome struttura es. int, float ecc.
 	int gg, mm, aaaa; // contenuto
 }; 
 data data_n; //dato
 data data_l;
 
 struct rubrica{
 	char nome[20], cognome[20];
 	int tel, cod;
 };
 rubrica riccardo;
 
 int main(){
 	cout << "Data di nascita: "<< endl;
 	
 	cout << " Data: ";
 	cin >> data_n.gg;
 	system("cls");
 	cout << " Mese: ";
 	cin >> data_n.mm;
 	system("cls");
 	cout << " Anno: ";
 	cin >> data_n.aaaa;
 	system("cls");
 	cout << data_n.gg << "/" << data_n.mm << "/" << data_n.aaaa << endl;
 }
