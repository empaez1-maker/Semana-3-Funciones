/*
Ejercicio 1: Conversión de temperatura.

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a
grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.

E/P/S

Entrada: El valor en grados Celsius.

Proceso: Calcular el valor de grados Celcius a Fahrenheit mediante su formula de conversión.

Salida: El valor en grados Fahrenheit.
*/
#include <iostream>
using namespace std;
int main()
{
  double Cel, Fah;
  Fah = 0;
  cout << "Ingresar el valor en grados Celsius: ";
  cin >> Cel;
  Fah = (Cel * 9 / 5) + 32;
  cout << "El valor en grados Fahrenheit es:" << Fah << endl;
  return 0;
}
