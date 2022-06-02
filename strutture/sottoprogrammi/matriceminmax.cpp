#include <iostream>
#include <cmath>

using namespace std;

//Variabili Global
int g = 10
//Prototipi
void Caricamento(float[][], float[], float[]);
void Visualizzazione(float[]);
void valmax(float[][], float[]);
void valmin(float[][], float[]);

int main()
{
	float vet[g][g], vmin[g], vmax[g];
	Caricamento(vet, vmax, vmin);
	valmax(vet, vmax);
	valmin(vet, vmin);
	cout << "Ecco tutti i valori piu' alti: " << endl << endl;
	Visualizzazione(vmax);
	system("pause");
	system("cls");
	cout << "Ecco tutti i valori piu' bassi: " << endl << endl;
	Visualizzazione(vmin);
	system("pause");
	system("cls");
}

//Sottoprogrammi

void Caricamento(float mat[][], float max[], float min[])
 {
 	for(int i = 0; i < g; i++)
	 {
	 	max[i] = -10000;	
 		min[i] = 10000;
 		for( int j = 0; j < g; j++)
	 	{
 			cout << "Inserisci numero nel vettore: ";
		 	cin >> matt[i][j];	
 			system("cls");
	 	}
	 }
 }
 
  void Visualizzazione(float mat[])
 {	
 	for(int i = 0; i < g; i++)
	 	{
 			cout << mat[i] << "\t";
	 	}
 }
 
 void valmax(float mat[][], float max[])
 {
 	for(int i = 0; i < g; i++)
 		for( int j = 0; j < g; j++)
	 	{
 			if(mat[i][j] < max[i])
			 {
			 	max[i] = mat[i][j];
			 	
			 }
	 	}
 	
 }
 
 void valmin(float mat[][], float min[])
 {
 	for(int i = 0; i < g; i++)
 		for( int j = 0; j < g; j++)
	 	{
 			if(mat[i][j] > min[i])
			 {
			 	min[i] = mat[i][j];
			 	
			 }
	 	}
 	
 }
