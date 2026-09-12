/*
Ejercicio 5 — Contador actualizado con referencia

Autor: Eathan Páez.

Fecha: 12 de septiembre 2026.

Enunciado: Desarrolla un programa que pida al usuario un número entero positivo n y luego incremente un contador desde 0 hasta n, usando una función que actualice el valor del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una variable desde una función. El programa debe mostrar el valor del contador en cada incremento.

E/P/S

Entrada: Un número entero positivo n introducido por el usuario.

Proceso: Se valida que n no sea negativo. Después, la función mostrarresultados utiliza un ciclo for para incrementar el contador cont desde 0 hasta n, pasando cont por referencia.

Salida: Se muestran en pantalla todos los números enteros desde 0 hasta n, incluyendo el valor de n.
*/
#include <iostream>
using namespace std;
void leerdatos(int &n);
void mostrarresultados(int n, int &cont);
int main()
{
  int n, cont;
  cont = 0;
  leerdatos(n);
  mostrarresultados(n, cont);
  return 0;
}
void leerdatos(int &n)
{
  cout << "===BIENVENIDO AL INGRESADOR DE NUMEROS ENTEROS===" << endl;
  cout << "INFORMACION IMPORTANTE: Este programa tiene como objetivo mostrar todos los numeros enteros antes del numero entero que ingresas e incluyendo al numero entero que ingresas" << endl;
  cout << "Ingresar un numero entero positivo: ";
  cin >> n;
  while (n < 0)
  {
    cout << "ERROR!! Ingrese un numero positivo: ";
    cin >> n;
  }
}
void mostrarresultados(int n, int &cont)
{
  for (cont = 0; cont <= n; cont++)
  {
    cout << cont << endl;
  }
}
