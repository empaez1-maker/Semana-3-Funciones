/*
Ejercicio 4 — Intercambio de dos números

Autor: Eathan Páez.

Fecha: 12 de septiembre 2026.

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y luego intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio.
• realizar el intercambio usando una función.
• mostrar los valores después del intercambio.

E/P/S

Entrada:  Dos números enteros positivos ingresados por el usuario: a y b.

Proceso: 1-.Leer los dos números.2-.Mostrar sus valores antes del intercambio. 3-.Intercambiar sus valores mediante una función. 4-.Mostrar los valores después del intercambio.
​
Salida: Mostrar los valores originales y los valores intercambiados. Por ejemplo, si se ingresan 5 y 8: antes a = 5, b = 8 y 
después a = 8, b = 5
*/
#include <iostream>
using namespace std;
void leerdosnumeros(int &a, int &b);
void mostrardosnumerosantesdelintercambio(int a, int b);
void intercambiodosnumeros(int a, int b);
void mostrarresultados(int a, int b);
int main()
{
  int n1, n2;
  leerdosnumeros(n1,n2);
  mostrardosnumerosantesdelintercambio(n1,n2);
  intercambiodosnumeros(n1,n2);
  mostrarresultados(n1,n2);
  return 0;
}
void leerdosnumeros(int &a,int &b)
{
  cout<<"====BIENVENIDO AL INTERCAMBIADOR DE NUMEROS===="<<endl;
  cout<<"Ingresar el primer numero entero que quiere intercambiar:";
  cin>>a;
  while (a<0)
  {
    cout<<"ERROR!! Ingresar numeros enteros positivos, nada de nuemeros negativos. Realizar otro intento!!:";
    cin>>a;
  }
  cout << "Ingresar el segundo numero entero que quiere intercambiar:";
  cin >>b;
  while (b < 0)
  {
    cout << "ERROR!! Ingresar numeros enteros positivos, nada de nuemeros negativos. Realizar otro intento!!:";
    cin >> b;
  }
  cout<<"Los dos numeros enteros ingresados se han registrado a la perfeccion!!"<<endl;
  cout<<endl;
}
void mostrardosnumerosantesdelintercambio(int a, int b)
{
  cout<<"El primer numero entero ingresado tiene el valor de:"<<a<<endl;
  cout<<"El segundo numero entero ingresado tiene el valor de:"<<b<<endl;
  cout<<endl;
}
void intercambiodosnumeros(int a, int b)
{
  cout<<"El intercambio de lo dos nuemeros enteros ingresados se ha relizado exitosamente!!"<<endl;
  cout<<"Resultados:"<<endl;
  cout<<"El primer numero entero tiene el valor de:"<<b<<endl;
  cout<<"El segundo numero entero tiene el valor de:"<<a<<endl;
}
void mostrarresultados(int a, int b)
{
  cout << "En resumen el primer numero entero ingresado ahora tiene el valor de" << b << "y el segundo numero entero ingresado ahora tiene el valor de"<<a<<endl;
}
