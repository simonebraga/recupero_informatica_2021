#include <iostream>

using namespace std;

int main() {
	
	int conta, n;
	conta = 0;
	
	do{
		
		cout << "Inserisci un numero (0 per uscire):" << '\n';
		cin >> n;
		
		if(n%2==0) {
			conta++;
		}
		
	} while(n!=0);
	
	conta--;
	cout << "Numeri pari inseriti: " << conta << '\n';
	
	return 0;
}