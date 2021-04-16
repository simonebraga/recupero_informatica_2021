#include <iostream>

using namespace std;

int main() {
	
	int n, res;
	
	cout << "Inserisci un numero:" << '\n';
	
	cin >> n;
	
	res = n;
	n = n - 1;
	
	while(n >= 1) {
		res = res * n;
		n = n - 1;
	}
	
	cout << "Fattoriale del numero inserito: " << res << '\n';
	
	return 0;
}