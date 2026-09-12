/*
Ejercicio 3 — Área de un rectángulo

Autor: Eathan Páez.

Fecha: 12 de septiembre 2026.

Enunciado: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos.
• calcular el área.
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.

E/P/S

Entrada: Valor de la base del rectángulo. Valor de la altura del rectángulo. Ambos valores pueden ser decimales.

Proceso: Leer la base y la altura.Multiplicar la base por la altura.Aplicar la fórmula: Area=base*altura.
​
Salida: Mostrar en pantalla el área calculada del rectángulo.
*/
#include <iostream>
using namespace std;
void leerdosvalores(double &base, double &altura);
double calculararea(double base, double altura);
void mostrarresultados(double area);
int main()
{
  double base, altura, area;
  leerdosvalores(base, altura);
  area = calculararea(base, altura);
  mostrarresultados(area);
  return 0;
}
void leerdosvalores(double &base, double &altura)
{
  cout << "====BIENVENIDO AL CALCULADOR DE AREA DE UN RECTANGULO====" << endl;
  cout << "Vamos a ingresar la base y altura del rectangulo para obtener su area" << endl;
  cout << "Ingresar el valor de la base del rectangulo:";
  cin >> base;
  while (base<=0)
  {
    cout<<"ERROR!! Ingrese valores validos , nada de numeros negativos ni el cero. Realizar otro intento!!";
    cin>>base;
  }
  cout << "Ingresar el valor de la altura del rectangulo:";
  cin >> altura;
  while (altura <= 0)
  {
    cout << "ERROR!! Ingrese valores validos , nada de numeros negativos ni el cero. Realizar otro intento!!";
    cin >> altura;
  }
}
double calculararea(double base, double altura)
{
  return base * altura;
}
void mostrarresultados(double area)
{
  cout << "El area del rectangulo es:" << area << endl;
}
