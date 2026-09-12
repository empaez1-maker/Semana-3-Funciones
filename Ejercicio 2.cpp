/*
Ejercicio 2 — Número mayor entre dos valores

Autor: Eathan Páez.

Fecha: 12 de septiembre 2026.

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos.
• comparar los valores.
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.

E/P/S

Entrada: Dos números enteros ingresados por el usuario: a y b.

Proceso: Leer los dos números enteros. Verificar que los números sean positivos. Comparar los valores: Si a > b, a es mayor. Si b > a, b es mayor. Si a == b, ambos números son iguales.
​
Salida: Mostrar cuál de los dos números es mayor o indicar que ambos números son iguales.
*/
#include <iostream>
using namespace std;
void leerdosnumeros(int &a, int &b);
void mostraresultados(int a, int b); 
void compararvalores(int a, int b);
int main()
{
  int n1, n2;
  leerdosnumeros(n1, n2);
  mostraresultados(n1, n2);
  compararvalores(n1,n2);
  return 0;
}
void leerdosnumeros(int &a, int &b)
{
  cout<<"Ingresar dos numeros enteros:"<<endl;
  cin >>a>>b;
  while (a<0 && b<0)
  {
    cout<<"ERROR!! Ingresar unicamente numeros enteros positivos. Realizar otro intento!!:";
    cin>>a>>b;
  }
  cout<<"Los dos numeros enteros ingresados, se han registrado exitosamente!!"<<endl;
  cout<<endl;
}
void mostraresultados (int a,int b)
{
  cout << "Los resultados obtenidos de los dos numeros enteros ingresados de quien es mayor entre"<< a<<"y"<<b<<"son:"<<endl;
  cout<<endl;
}
void compararvalores(int a, int b)
{
  if (a>b)
  {
    cout<<"El numero entero"<<a<<"es mayor al numero entero"<<b<<endl;
  }
  else if (b>a)
  {
    cout<<"El numero entero"<<b<<"es mayor al numero entero"<<a<<endl;
  }
  else if (a==b)
  {
    cout<<"Los dos nuemeros enteros ingresados son iguales!!, no existe una comparacion"<<endl;
  }
}

