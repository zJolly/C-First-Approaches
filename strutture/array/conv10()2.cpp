#include <iostream>
#include <cmath>
 using namespace std;
 
 int main()
 {
 	int n, nv[100], res, f; 
 	cout << "Inserisci il numero in base 10 che vuoi convertire in base 2: ";
 	cin >> n;
 	for(int i = 0;;i++ )
	 {
 		res = n%2;
 		n = n/2;
 		if(res == 1)
		 {
 			nv[i] = 1;
		 }
		 else
		 {
		 	nv[i] = 0;
		 }
		 if(n == 1){
		 	i = f;
			break;
	 	}
	}
	 cout << "Ecco il numero convertito: " << endl << endl;
	 for(int i = 0; i < fù;i++)
	 {
	 	cout << nv[i] << " ";
	 }
	 cout << endl;
}
