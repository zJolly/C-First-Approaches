#include <iostream>
#include <cmath>
 using namespace std;
 
void insert(int[], int);
void ordine(int[], int);
void visual(int[], int);
 
 int main(){
 	int v[100], n;
 	cout << "Quanto vuoi grande il vettore:";
 	cin >> n;
 	system("cls");
 	insert(v, n);
 	ordine(v, n);
 	visual(v, n);
 }

void insert(int x[], int p){
	for(int i=0; i < p; i++ )
		cin >> x[p];
		system("cls");
}
void ordine(int x[],int p){
	int comodo = 0;
	for(int i = 0; i < p - 1; i++)
 		for(int j = i + 1; j < p; j++)
 			if(x[i] <  x[j])
 			{
 				comodo = x[i];
 				x[i] = x[j];
 				x[j] = comodo;
 				for(int i=0; i < p; i++ )
		cout << x[p] << endl;
		 	}
}

void visual(int x[], int p){
	for(int i=0; i < p; i++ )
		cout << x[p] << endl;
	
}
