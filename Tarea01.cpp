/*
Ejercicio 1 — Números pares hasta N.

Autor: Eathan Páez.

Fecha: 5 de septiembre 2026.

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N. Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
de error.

Pista: en este ejercicio se recomienda usar while, porque te ayudará a controlar una
variable que va avanzando paso a paso hasta llegar al límite.

E/P/S

Entrada: Número entero positivo N.

Proceso: Calcular los números pares desde 1 hasta N. Validar que el valor N no sea menor o igual a 0.

Salida: Mostrar todos los números pares desde 1 hasta N(que no salga numerso negativos ni el cero).
*/
#include <iostream>
using namespace std;
int main()
{
  int N, cont;
  cont = 1;
  cout << "Ingresar unicamente un numero entero positivo:";
  cin >> N;
  while (N <= 0)
  {
    cout << "ERROR!! Ingresar obligatoriamente numeros positivos y esta prohibido ingresar el 0. Realizar otro intento!!:";
    cin >> N;
  }
  cout<<"1"<<endl;
  while (cont <= N)
  {
    if (cont % 2 == 0)
    {
      cout << cont << endl;
    }
    cont++;
  }
  return 0;
}
