#include <iostream>
#include <cmath>

using namespace std;

//Prototipi
int OttieniDimensione(void);
void Caricamento(int[], int);
void Visualizzazione(int[], int);
 
int main(){
	//Dichiarazione 
	int v[10], numele;
	numele = OttieniDimensione();
	Caricamento(v, numele);
	Visualizzazione(v, numele);
	system("pause");
	return 0;
}


//Sottoprogrammi
 int OttieniDimensione()
 {
	 int Dim;
	 do{
		 cout << "Inserisci il numero di elementi: ";
		 cin >> Dim; 
	 }
	 while(Dim <= 0 || Dim >= 10);
	 return Dim;
 }
 
 void Caricamento(int vet[], int n)
 {
 	for(int i = 0; i < n; i++)
	 {
 		cout << "Inserisci numero nel vettore: ";
		 cin >> vet[i];	
	 }
 }
 
 void Visualizzazione(int vet[], int n)
 {	
 	cout << "Ecco il vettore: " << endl;
 	for(int i = 0; i < n; i++)
	 {
 		cout << vet[i];	
	 }
	 cout << endl;
 }
