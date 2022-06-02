#include <iostream>
#include <cmath>
using namespace std;

void Caricamento(int[], int);
void Visualizzazione(int[], int);
void Ordinamento(int[], int);
void Assoluto(int[], int[], int);
int Binary();

int main(){
	int vet[10], veta[10], biny, T[10], f = 0;
	float medt = 0, maxt = -2000, mint = 2000;
	Caricamento(vet, 10);
	Visualizzazione(vet, 10);
	Ordinamento(vet, 10);
	Visualizzazione(vet, 10);
	Assoluto(vet, veta, 10);
	Visualizzazione(veta, 10);
	biny = Binary();
	//tempo
	Caricamento(T, 10);
	cout << "Tempo:" << endl;
	Visualizzazione(T, 10);
 	for(int i = 0; i < 10; i++)
	 {
	 	medt = medt+T[i];
	 	if(T[i] > 15 && T[i] < 25)
	 		f++;
	 	if(maxt <
		  T[i])
	 		maxt = T[i];
	 	if(mint > T[i])
	 		mint = T[i];
	 }
	 medt = medt/10;
	 cout << endl << "Temperature negli ultimi 10 giorni:" << endl << "T. media: " << medt << endl << "T. massima: " << maxt << endl << "T. minima: " << mint << endl << "Volte T. tra i 15 e 25 gradi: " << f << endl;
	
}

void Caricamento(int vet[], int n){
 	for(int i = 0; i < n; i++)
	 {
 		cout << "Inserisci numero nel vettore: ";
		 cin >> vet[i];	
	 }
	 system("cls");
 }
 
void Visualizzazione(int vet[], int n){	
 	cout << "Ecco il vettore: " << endl;
 	for(int i = 0; i < n; i++)
	 {
 		cout << vet[i] << " ";	
	 }
	 cout << endl;
}

void Ordinamento(int vet[], int n){
	int f;
	for(int i=0;i<n-1;i++){
	int min = i;
        for(int j=i+1;j<n;j++)
        	if (vet[j] < vet[min])
        	     min = j;

        f = vet[min];
        vet[min] = vet[i];
        vet[i] = f;
	}
}

void Assoluto(int vet[], int vet2[], int n){
	int f = 1;
	for(int i = 0; i < n; i++){
		if(vet[i] < 0){
 			for(;;){
 				if(vet[i]+f == 0)
 				break;
 				f++;
		 	}
		 	vet2[i] = f;
		 }
		 else{
			vet2[i] = vet[i];
		}
		f = 1;
	 }
	
}

int Binary(){
	int d=0,b,i=0;
	cout<<"Inserisci il numero binario da convertire: ";
	cin>>b;	
	while(b>0){
		if(b%10!=0) {
			d=d+pow(2,i);
		}
		b=b/10;
		i++;			
	}
	cout<<"Il numero in decimale vale: "<<d;
}
