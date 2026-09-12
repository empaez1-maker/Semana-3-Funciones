/*
Ejercicio 5: Reparto de horas en semanas, días y horas.

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.

E/P/S

Entrada: Horas totales.

Proceso: Calcular mediante formulas la conversion de horas a semanas,dias y horas sobrantes.

Salida: Mostrar cuantas semanas, cuantos dias y cuantas horas sobran.
*/
#include <iostream>
using namespace std;
int main()
{
  int horas_totales, semanas, dias, horas_sobrantes;
  horas_sobrantes = 0;
  semanas = 0;
  dias = 0;
  cout << "Ingrese la cantidad total de horas (valor no negativo):";
  cin >> horas_totales;
  while(horas_totales < 0)
  {
    cout << "Ingrese de nuevo!! El valor de horas no puede ser negativo:";
    cin>> horas_totales;
  }
    horas_sobrantes = horas_totales % 168;
    semanas = (horas_totales - horas_sobrantes) / 168;
    dias = (horas_sobrantes - (horas_sobrantes % 24)) / 24;
    horas_sobrantes = horas_sobrantes % 24;
    cout << "Equivalencia:" << endl;
    cout << "Semanas:" << semanas << endl;
    cout << "Dias:" << dias << endl;
    cout << "Horas sobrantes:" << horas_sobrantes << endl;
    return 0;
}
