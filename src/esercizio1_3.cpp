#include <iostream>

using namespace std;

int main() {
	
	int a, b, c;
	
	cout << "Inserisci 3 numeri:" << '\n';
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if(a > b) {
		
		if(a > c) {
			cout << "Il massimo e' " << a << '\n';
		} else {
			cout << "Il massimo e' " << c << '\n';
		}
		
	} else {
		
		if(b > c) {
			cout << "Il massimo e' " << b << '\n';
		} else {
			cout << "Il massimo e' " << c << '\n';
		}
		
	}
	
	return 0;
}