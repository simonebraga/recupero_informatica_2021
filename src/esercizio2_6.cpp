#include <iostream>

using namespace std;

int main() {
	
	int paperino[10];
	int i, i_min, j, temp;
	
	for(i=0; i<10; i++) {
		cout << "Inserire un valore nel vettore:" << '\n';
		cin >> paperino[i];
	}
	
	// ORDINAMENTO CON SELECTION-SORT
	
	for(i=0; i<10; i++) {
		
		i_min = i;
		
		for(j=i; j<10; j++) {
			if(paperino[j] < paperino[i]) {
				i_min = j;
			}
		}
		
		temp = paperino[i];
		paperino[i] = paperino[i_min];
		paperino[i_min] = temp;
	}
	
	for(i=0; i<10; i++) {
		cout << paperino[i] << ' ';
	}
	
	cout << '\n';
	
	return 0;
}