/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101540467@ull.edu.es
 * @date Oct 18 2024
 * @brief Imprime la opeacion de dos numeros con varios operandos distintos
 */

#include <iostream>
using namespace std;

int main() {
	int numero_1, numero_2;
	cout << "Introduce dos números" << endl;
	cin >> numero_1 >> numero_2;
	cout << numero_1 << "+" << numero_2 << "=" << numero_1+numero_2 << endl;
	cout << numero_1 << "-" << numero_2 << "=" << numero_1-numero_2 << endl;
	cout << numero_1 << "*" << numero_2 << "=" << numero_1*numero_2 << endl;
	cout << numero_1 << "/" << numero_2 << "=" << numero_1/numero_2 << endl;
	cout << numero_1 << "%" << numero_2 << "=" << numero_1%numero_2 << endl;
	return 0;
}
