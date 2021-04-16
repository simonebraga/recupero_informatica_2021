#include <iostream>

using namespace std;

int main() {
	
	int paperino[10];
	int i, max;
	
	for(i=0; i<10; i++) {
		cout << "Inserire un valore nel vettore:" << '\n';
		cin >> paperino[i];
	}
	
	max = paperino[0];
	
	for(i=0; i<10; i++) {
		
		if(paperino[i] > max) {
			max = paperino[i];
		}
	}
	
	cout << "Massimo: " << max << '\n';
	
	return 0;
}