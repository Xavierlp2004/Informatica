/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101540467@ull.edu.es
 * @date Oct 18 2024
 * @brief Imprime la letra minuscula de la respectiva mayuscula
 */

#include <iostream>
using namespace std;

int main() {
    char mayuscula;
    cin >> mayuscula;
    char minuscula = tolower(mayuscula);
    cout << minuscula << endl;
    return 0;
}