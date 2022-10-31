#include <iostream>
#include <string>
using namespace std;
int main() {
	char mayuscula;
	cin >> mayuscula;
	int distancia = int(mayuscula) - int('A');
	char minuscula = char(int('a') + distancia);
	minuscula = char(int('a') + (int(mayuscula) - int('A')));
	minuscula = char('a' + (mayuscula - 'A'));
	cout << minuscula << endl;
	return 0;
}

