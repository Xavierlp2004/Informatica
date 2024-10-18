/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101540467@ull.edu.es
 * @date Oct 18 2024
 * @brief Imprime la tabla de la verdad de los operadores basicos logicos
 */

 #include <iostream>
using namespace std;

int main() {
	cout << "p     !p    " << endl;
	cout << "----- ------" << endl;
    cout << true << "      " << true << endl;
    cout << false << "      " << false << endl;
	cout << endl;

	cout << "p q    p && q" << endl;
	cout << "----- ------" << endl;
	cout << false << " " << false << "   " << (false && false) << endl;
	cout << false << " " << true << "   " << (false && true) << endl;
	cout << true << " " << false << "   " << (true && false) << endl;
	cout << true << " " << true << "   " << (true && true) << endl;
	cout << endl;

	cout << "p q    p || q" << endl;
    cout << "----- ------" << endl;
    cout << false << " " << false << "   " << (false || false) << endl;
    cout << false << " " << true << "   " << (false || true) << endl;
    cout << true << " " << false << "   " << (true || false) << endl;
    cout << true << " " << true << "   " << (true || true) << endl;
    cout << endl;
    return 0;
}	