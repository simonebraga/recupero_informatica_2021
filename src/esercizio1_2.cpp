#include <iostream>

using namespace std;

int main() {
	
	int n;
	
	cout << "Inserisci un numero:" << '\n';
	
	cin >> n;
	
	if(n > 0) {
		
		cout << "Numero positivo" << '\n';
		
	} else {
		
		if(n < 0) {
			cout << "Numero negativo" << '\n';
		} else {
			cout << "Numero nullo" << '\n';
		}
		
	}
	
	return 0;
}