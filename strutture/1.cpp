#include <iostream>
#include <cmath>
#include <string.h>

int g = 3;

using namespace std;

int main(){
	char nom[30][g];
	int giom[g], giof[g],cas[g];
	int f;
	for(int i = 0; i < g; i++){
		cout << "Inserimento dipendente:" << endl;
		cout << "Nome: ";
		gets(nom[i]);
		system("pause");
		system("cls");
		do{
			cout << "Che tipo di permesso (0)ferie, (1)malattia: ";
			cin >> f;
			if(f != 0 && f != 1)
			cout << "Hai sbagliato di inserire... 1 o 0 per selezionare!" << endl;
			system("pause");
			system("cls");
		}while(f <= -1 && f >= 2);
		if( f == 0){
			do{
				cout << "Quanti giorni di permesso: ";	
				cin >> giof[i];
				if(giof[i] >= 31)
				cout << "Troppi giorni di ferie!" << endl;
				system("pause");
				system("cls");
			}while(giof[i] >= 31);
			//somma soldi da detrarre ferie
			cas[i] = cas[i] + (5 * giof[i]);
		}
		else{
			do{
				cout << "Quanti giorni di permesso: ";	
				cin >> giom[i];
				if(giom[i] >= 41)
				cout << "Troppi giorni di malattia!" << endl;
				system("pause");
				system("cls");
			}while(giom[i] >= 41);
			//somma soldi da detrarre malattia
			cas[i] = cas[i] + (3 * giom[i]);	
		}
	}
	//visual tabella
	cout << "Lista dipendenti: " << endl;
	for(int i = 0; i < g; i++){
		cout << endl;
		cout << i << "'  " <<nom[i] << "\t" << "N' ferie: " << giof[i] << "\t";
		cout << "N' malattia: " << giom[i] << "\t" << "soldi detratti: " << cas[i] << "\t";
	}
}
