/*
Ejercicio 1 — Registro de edades.

Autor: Eathan Páez.

Fecha: 7 de septiembre 2026.

Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo. Luego, el programa debe:
1. mostrar todas las edades registradas junto con su posición.
2. pedir al usuario una edad adicional para buscar dentro del arreglo.
3. indicar si esa edad fue encontrada o no.
4. en caso de encontrarla, mostrar la posición de la primera coincidencia.

Pista:

Recuerde que primero debe declarar el arreglo, después cargar los datos con un for,
luego recorrerlo para mostrar los valores y finalmente usar otro recorrido para realizar
la búsqueda secuencial.

E/P/S

Entrada: Ocho edades enteras ingresadas por el usuario, una edad adicional que desea buscar, no se aceptan edades negativas.

Proceso: Declarar un arreglo de ocho posiciones, guardar las edades mediante un ciclo for, recorrer el arreglo, comparar que la edad buscada con cada elemento del arreglo, si coincide se guarda su posición y cambia el encontrado a true, la variable posicion inicia en −1, el −1 es para indicar que la edad todavía no ha sido encontrada. La búsqueda conserva la primera coincidencia. Validar que cada edad no sea negativa.

Salida: Mostrar las ocho edades registradas junto con sus posiciones, indicar si la edad buscada fue encontrada, si fue encontrada se mostrara la posición de la primera coincidencia. Si no fue encontrada, mostrar el mensaje: “La edad no fue encontrada.”
*/
#include <iostream>
using namespace std;
int main()
{
  int eda[8];
  int i;
  int buscando;
  int posicion=-1;
  bool encontrado=false;
  for (i=0;i<8;i++)
  {
    cout<<"Ingresar la edad"<<i+1<<":";
    cin>>eda[i];
    while (eda[i]<0)
    {
     cout<<"ERROR!!Ingresar una edad valida, no tiene que ser negativa. Realizar otro intento!!:";
     cin>>eda[i];
    }
  }
  cout<<endl;
  cout<<"Edades registradas:"<<endl;
  for (i=0;i<8;i++)
  {
    cout<<"Posicion"<<i<<":"<<eda[i]<<endl;
  }
  cout<<endl;
  cout<<"Ingrese la edad que desea buscar:";
  cin >> buscando;
  for (i=0;i<8;i++)
  {
    if (eda[i] == buscando && encontrado == false)
    {
      encontrado = true;
      posicion = i;
    }
  }
  cout<<endl;
  if (encontrado == true)
  {
    cout << "Edad encontrado en la posicion:" << posicion << endl;
  }
  else
  {
    cout << "La edad no fue encontrada." << endl;
  }
  return 0;
}
