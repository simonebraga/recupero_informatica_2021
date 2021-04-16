#include <iostream>

using namespace std;

int main() {
	
	int n, i;
	
	cout << "Inserisci un numero:" << '\n';
	cin >> n;
	
	for(i=0; i<n; i++) {
		cout << '*';
	}
	
	cout << '\n';
	
	return 0;
}