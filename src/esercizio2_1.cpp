#include <iostream>

using namespace std;

int main() {
	
	int n, max, min, somma, conta;
	float media;
	
	cout << "Inserire un numero:" << '\n';
	cin >> n;
	
	max = n;
	min = n;
	somma = n;
	conta = 0;
	
	while(conta < 19) {
		
		cout << "Inserire un numero:" << '\n';
		cin >> n;
		
		if(n > max) {
			max = n;
		}
		
		if(n < min) {
			min = n;
		}
		
		somma = somma + n;
		conta = conta + 1;
		
	}
	
	media = somma/20.0;
	
	cout << "Massimo: " << max << '\n';
	cout << "Minimo: " << min << '\n';
	cout << "Media: " << media << '\n';
	
	return 0;
}