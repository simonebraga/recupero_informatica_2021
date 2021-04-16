#include <iostream>

using namespace std;

int main() {
	
	int a, b, c, d;
	float m;
	
	cout << "Inserisci 4 voti:" << '\n';
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	m = (a+b+c+d)/4;
	
	if(m>=6) {
		cout << "Promosso!" << '\n';
	} else {
		cout << "Bocciato..." << '\n';
	}
	
	return 0;
}