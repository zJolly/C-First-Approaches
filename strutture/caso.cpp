#include <iostream>
#include <cmath>
#include <string.h>
 using namespace std;
 
int Aumenta (int a, int b){
	int somma;
	a++;
	b++;
	somma = a+b;
	return somma;
}

int main() {
	int x = 10; 
	int y = 3;
	cout << Aumenta (x, y);
}


