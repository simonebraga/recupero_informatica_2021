#include <iostream>

using namespace std;

int main() {
	
	int paperino[10];
	int i, j, temp;
	
	for(i=0; i<10; i++) {
		cout << "Inserire un valore nel vettore:" << '\n';
		cin >> paperino[i];
	}
	
	// ORDINAMENTO CON BUBBLE-SORT
	
	for(i=0; i<10; i++) {
		
		for(j=0; j<9; j++) {
			
			if(paperino[j] > paperino[j+1]) {
				temp = paperino[j];
				paperino[j] = paperino[j+1];
				paperino[j+1] = temp;
			}
		}
	}
	
	for(i=0; i<10; i++) {
		cout << paperino[i] << ' ';
	}
	
	cout << '\n';
	
	return 0;
}