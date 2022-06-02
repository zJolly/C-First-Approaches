#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	int i=0, n;
 	cout << "Quante operazioni devi fare: ";
 	cin >> n;
 	system("cls");
 	float x, y, z, t;
 	while(i < n){
 		i++;
 		cout << "Inserisci i tre numeri: " << endl;
 		cin >> x;
 		cin >> y;
 		cin >> z;
 		t = x+y+z;
 		system("cls");
 		cout << "Ecco la somma: " << endl;
 		cout << t << endl;
 		system("pause");
	 }	
 }
