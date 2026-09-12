/*
Ejercicio 2 — Registro de cantidades vendidas.

Autor: Eathan Páez.

Fecha: 7 de septiembre del 2026.

Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de
productos vendidos durante el día en un arreglo.Luego, el programa debe:
1. mostrar todas las cantidades ingresadas.

2. pedir al usuario una cantidad específica para buscar.

3. indicar si esa cantidad se encuentra dentro del arreglo.

4. mostrar la posición donde aparece por primera vez, o un mensaje indicando
que no fue encontrada.

Pista:

Para resolver este ejercicio, puede usar una variable bandera, por ejemplo
encontrado, que al inicio tenga el valor false y cambie a true cuando el dato buscado
aparezca dentro del arreglo.

E/P/S

Entrada: Se ingresan seis cantidades enteras de productos vendidos durante el día y una cantidad adicional que se desea buscar dentro del arreglo.

Proceso: Se declara un arreglo de seis posiciones y se guardan las cantidades mediante un ciclo for. Luego, se recorre el arreglo. Después, se compara la cantidad buscada con cada elemento del arreglo. La variable de encontrado inicia en false y cambia a true cuando se encuentra la cantidad. También se guarda la posición de la primera coincidencia.

Salida: Se muestran las seis cantidades registradas. Además, se indica si la cantidad buscada fue encontrada. Si se encuentra, se muestra la posición de su primera aparición; de lo contrario, se muestra el mensaje: “La cantidad no fue encontrada.”
*/
#include <iostream>
using namespace std;
int main()
{
  int pv[6];
  int i;
  int buscando;
  int posicion = -1;
  bool encontrado = false;
  for (i = 0; i < 6; i++)
  {
    cout << "Ingresar la cantidad del producto vendido" << i + 1 << ":";
    cin >> pv[i];
    while (pv[i] < 0)
    {
      cout << "ERROR!! Ingresar valores validos, prohibido valores negativos. Intente nuevamente!!:";
      cin >> pv[i];
    }
  }
  cout<<endl;
  cout << "Las cantidades ingresadas de los productos vendidos son:" << endl;
  for (i=0;i<6;i++)
  {
    cout<<"Cantidad"<<i<<":"<<pv[i]<<endl;
  }
  cout<<endl;
  cout << "Ingresar el valor de la canitdad de los productos vendidos que desea buscar:";
  cin >> buscando;
  for(i=0;i<6;i++)
  {
    if (pv[i] == buscando && encontrado == false)
    {
      encontrado=true;
      posicion=i;
    }
  }
  cout<<endl;
  if (encontrado==true)
  {
    cout << "Se encontro la canitdad de los productos vendidos en el apartado:" << posicion << endl;
  }
  else
  {
    cout << "La canitdad de los productos vendidos no fue localizada."<<endl;
  }
}
