/*
Ejercicio 2 — Suma de 5 números.

Autor: Eathan Páez.

Fecha: 5 de septiembre 2026.

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
• la suma total.
• y cuántos números fueron ingresados.

Pista: en este ejercicio se recomienda usar for, porque ya sabes desde el inicio
cuántas repeticiones habrá.

E/P/S

Entrada:  5 números enteros.

Proceso: Calcular la suma total de esos valores. Validar que los numeros seas positivos y no negativos.

Salida: Mostrar la suma total y cuántos números fueron ingresados.
*/
#include <iostream>
using namespace std;
int main()
{
  int numero, suma, cont;
  int i;
  suma = 0;
  cont = 0;
  for (i = 1; i <= 5; i++)
  {
    cout << "Ingresar el numero entero" << i << ":";
    cin >> numero;
    while (numero < 0)
    {
      cout << "El numero no puede ser negativo. Ingrese nuevamente!!: ";
      cin >> numero;
    }
    suma= suma + numero;
    cont++;
  }
  cout << "La suma total es: " << suma << endl;
  cout << "Cantidad de numeros ingresados: " << cont << endl;
  return 0;
}
