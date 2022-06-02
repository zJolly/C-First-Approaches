#include <iostream>
#include <cmath>
 using namespace std;
 //numero massimo di tabelline.
 int n = 200;
 int main(){
 	float tot[n][1],num1[n][11], num2[n][11], d;
 	cout << "Ecco la tabella delle moltiplicazioni fino alla " << n << "': " << endl;
 	//inserimento numeratore
 	d = 1;
 	for(int i = 0;i < n; i++){
		for(int j = 0;j < 11; j++){
			num1[i][j] = d;
			}
		d++;	
		}
	//inserimento denomunatore
	d = 0;
 	for(int i = 0;i < n; i++){
		for(int j = 0;j < 11; j++){
			num2[i][j] = d;
			d++;
			}
			d = 0;	
		}
	//tabelline operazioni
	for(int i = 0;i < n; i++){
		cout << endl << endl;
		for(int j = 0;j < 11; j++){
			tot[i][j] = num1[i][j]*num2[i][j];
			cout << num1[i][j] << " x " << num2[i][j] << " = " << tot[i][j] << "\t";
			}	
		}
		cout << endl;			
 }
