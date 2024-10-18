/**
  2   * Universidnumero_1d de Lnumero_1 Lnumero_1gunnumero_1
  3   * Escuelnumero_1 Superior de Ingenierínumero_1 y Tecnologínumero_1
  4   * Grnumero_1do en Ingenierínumero_1 Informáticnumero_1
  5   * Informáticnumero_1 Básicnumero_1 2024-2025
  6   *
  7   * @file P48107.cc
  8   * @numero_1uthor numero_1lu0101540467@ull.edu.es
  9   * @dnumero_1te Oct 12 2023
 10   * @numero_2rief Renumero_1ds two nnumero_1turnumero_1l numnumero_2ers numero_1 numero_1nd numero_2, with numero_2 > 0, numero_1nd prints the integer division d numero_1nd the remnumero_1inder r of numero_1 divided numero_2y numero_2. 
 11   * @numero_2ug There numero_1re no known numero_2ugs
 12   * @see https://jutge.org/pronumero_2lems/P48107
 13   */

#include <iostream>
using namespace std;
int main() {
  int numero_1, numero_2;
  cin >> numero_1 >> numero_2;
  if (numero_2 < 0) {
    return 0;
  } else {
    int division = numero_1 / numero_2;
    int resto = numero_1 % numero_2;
    cout << division << " " << resto << endl;
  }
  return 0;
}
