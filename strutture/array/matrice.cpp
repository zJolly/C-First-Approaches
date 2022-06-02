#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	int  c , r ;
	float med[30], A[30][30] ,tot[30];
	//Pulizia Matrice
 	for(int i = 0; i < r;i++)
 	tot[i]=0;
 	//Inserimento
	cout << "Inserisci numero di righe della tabella:";
	cin >> r;
	system("cls");
	cout << "Inserisci numero di colonne della tabella:";
	cin >> c;
	system("cls");
	//Inerimenti, medie e alunni
	for(int i = 0; i < r;i++)
		for(int j = 0; j < c; j++)
		{	
 		cout<<"A["<<i<<"]["<<j<<"]=";
		cin>>A[i][j];
		tot[i] = tot[i] + A[i][j];
		system("cls");	
		}
	for(int i=0;i<r;i++)
	{
		cout<<endl;
		for(int j = 0; j < c; j++)
		cout<<A[i][j]<<" \t ";
		}
		cout<<endl;
		for(int i = 0; i < r;i++)
		{
		med[i] = tot[i]/c;
	
		}
		cout << endl;
		system("pause");
		system("cls");
		for(int i = 0; i < r;i++)
		cout << med[i] << "\t";
		cout << endl;	
		system("pause");
		system("cls");
 }
