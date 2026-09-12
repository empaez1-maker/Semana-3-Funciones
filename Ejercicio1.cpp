/*
Ejercicio 1 — Suma y promedio de 3 números

Autor: Eathan Páez.

Fecha: 12 de septiembre 2026.

Enunciado: Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números.
• calcular la suma.
• calcular el promedio.
• mostrar los resultados.

E/P/S

Entrada: Tres números enteros ingresados por el usuario: a, b y c.

Proceso: 1-.Leer los tres números. 2-.Calcular la suma: suma=a+b+c. 3-.Calcular el promedio: promedio= suma /3.
​
Salida: Mostrar los resultados y la suma de los tres números y el promedio de los tres números.
*/
#include <iostream>
using namespace std;
void leerTresNumeros(double &a, double &b, double &c);
double calcularSuma(double a, double b, double c);
double calcularPromedio(double suma);
void mostrarResultados(double suma, double promedio);
int main()
{
  double n1, n2, n3, suma, promedio;
  leerTresNumeros(n1, n2, n3);
  suma = calcularSuma(n1, n2, n3);
  promedio = calcularPromedio(suma);
  mostrarResultados(suma, promedio);
  return 0;
}
void leerTresNumeros(double &a, double &b, double &c)
{
  cout << "Ingresar el primer numero entero:";
  cin >> a;
  while (a < 0)
  {
    cout << "ERROR!! Ingresar unicamente numeros enteros positivos. Realizar otro intento!!:";
    cin >> a;
  }
  cout << "Ingresar el segundo numero entero:";
  cin >> b;
  while (b < 0)
  {
    cout << "ERROR!! Ingresar unicamente numeros enteros positivos. Realizar otro intento!!:";
    cin >> b;
  }
  cout << "Ingresar el tercer numero entero:";
  cin >> c;
  while (c < 0)
  {
    cout << "ERROR!! Ingresar unicamente numeros enteros positivos. Realizar otro intento!!:";
    cin >> c;
  }
}
double calcularSuma (double a, double b, double c)
{
  return a + b + c;
}
double calcularPromedio(double suma)
{
  return suma / 3.0;
}
void mostrarResultados(double suma, double promedio)
{
  cout << "Los resultados son:" << endl;
  cout << "La suma de los 3 numeros enteros es: " << suma << endl;
  cout << "El promedio de los 3 numeros enteros es: " << promedio << endl;
}
