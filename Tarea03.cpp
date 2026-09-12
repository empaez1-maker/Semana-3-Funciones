/*
Ejercicio 3 — Tabla de multiplicar repetitiva

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.

Pista: también puedes resolver este ejercicio con for, ya que la tabla se repite una
cantidad fija de veces. Si quieres practicar más, también puedes intentar hacerlo con
while.

E/P/S

Entrada: Un número entero.

Proceso: Calcular mediante una formula con el cont, el numero que ingresa el usuario , dando el valor de la multiplicacion.

Salida:  Mostrar un mensaje indicando que la tabla fue generada
correctamente. Mostrar la tabla de multiplicar en base al numero entero que ingresa el usuario.
*/
#include <iostream>
using namespace std;
int main()
{
  int num, cont, mult;
  int i;
  mult = 0;
  cont = 0;
  cout << "Ingresar el numero entero para generar su tabla de multiplicar:";
  cin >> num;
  while (num <= 0)
  {
    cout << "ERROR!! Ingrese numeros positivos obligatoriamente y esta prohibido el 0. Realizar otro intento!!:";
    cin >> num;
  }
  while (cont<=10)
  {
    mult= cont * num;
    cout<<cont<<"*"<<num<<"="<<mult<<endl;
    cont++;
  }
  cout << "La tabla fue generada correctamente!!" << endl;
}
