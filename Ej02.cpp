/*
Ejercicio 2: Área y perímetro de un rectángulo.

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
debe calcular y mostrar el área y el perímetro del rectángulo.

E/P/S

Entrada: La base y la altura del rectángulo.

Proceso: Calcular el área y el perímetro mediante sus formulas respectivas del rectángulo. Validar que el perimetro y el area sean mayores a 0.

Salida: Mostrar el área y el perímetro del rectángulo(no negativas ni el cero).
*/
#include <iostream>
using namespace std;
int main()
{
  double base, altura, area, perimetro;
  area = 0;
  perimetro = 0;
  cout << "Ingresar el valor de la base del rectangulo:";
  cin >> base;
  while (base <= 0)
  {
    cout << "ERROR!! Ingresar un numero positivo obligatoriamente y valido. Intente nuevamente!!:";
    cin >> base;
  }
  cout << "Ingresar el valor de la altura del rectangulo: ";
  cin >> altura;
  while (altura <= 0)
  {
    cout << "ERROR!! Ingresar un numero positivo obligatoriamente y valido. Intente nuevamente!!:";
    cin >> altura;
  }
  area = base * altura;
  perimetro = 2 * (base + altura);
  cout << "El area del rectangulo es:" << area << endl;
  cout << "El perimetro del rectangulo es:" << perimetro << endl;
  return 0;
}
