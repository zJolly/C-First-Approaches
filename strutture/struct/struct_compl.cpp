//Scrittura su un file dei dati acqusiti mediante la tastiera
#include<iostream>
#include<fstream>
using namespace std;
int main(){
char cognome[20];
int n,altezza,peso;
cout<<"\n\t\t Inserimento dati iscritti "<<endl;
cout<<"Numero elementi ( 0=fine):";
cin>>n;
if(n>0){
/*
Apertura in scrittura del file del testo ( default) iscritti.txt .
I dati inseriti saranno aggiunti a queli esistenti nel file (ios::app)
append-nuovi dati sono aggiunti alla sua finemqualunque siala posizione determinata
dall ultimo accesso , se il file non esiste sarà creato.
*/
ofstream iscritti("iscritti.txt",ios::app);
if(iscritti)//se non ci sono stati errori nel apertura
for(int i=0;i<n;i++){
// Acqusizione dati mediante lo stram standard di input cin-tastiera
cout<<" \n Cognome :";
cin>>cognome;
cout<<" \n Altezza :";
cin>>altezza;
cout<<" \n Peso :";
cin>>peso;
//scrittura dati formatati nel file iscritti
		}
	}
else
cout<<"Non e' possibile creare il file "<<endl;
system("pause") ;
}
