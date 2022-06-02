/*Si legga una sequenza di n caratteri .

 Ogni volta che viene letto il carattere 'A' ,

 si stampi la frase "ho letto la lettera A".

 Se nella sequenza letta non e' contenuto neppure uno 'A',

 si stampi la frase "non ho trovato la lettera A".*/
#include <iostream>
#include <cmath>
 using namespace std;
 int n = 10;
 
 int main(){
 	char A[n];
 	int d = 0;
 	for(int i = 0;i < n; i++){
 		cout << "Inserisci lettera: ";
 		cin >> A[i];
 		system("cls");
 		if(A[i] == 'a' || A[i] == 'A'){
 			cout << "Ho letto la lettera A" << endl;
 			d++;
		 }
	 }	 	
	 if(d == 0){
	 	cout << "Non ho trovato la lettera A";
	 }
	 cout << "la lettera A si ripete per: " << d << " volte! " << endl;
	 cout << endl;
	 system("pause");
	 system("cls");
}
