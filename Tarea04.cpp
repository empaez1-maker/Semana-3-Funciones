/*
Ejercicio 4 — Menú repetitivo.

Autor: Eathan Páez.

Fecha: 5 de septiembre 2026.

Enunciado: Elaborar un programa en C++ que muestre el siguiente menú:
1. Mostrar el doble de un número.
2. Mostrar el triple de un número.
3. Salir.
El programa debe repetirse hasta que el usuario elija la opción 3.
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
error y volver a mostrar el menú.

Pista: en este ejercicio se recomienda usar do while, porque el menú debe mostrarse
al menos una vez.Como extra opcional, puedes usar switch para organizar mejor las opciones del
menú.

E/P/S

Entrada: Los valores del menu.

Proceso: Calcular el doble y el triple de un número. Si el usuario pone el 3 sale del menu, sino se repite el menu. Validar que el usuario solo ingese numeros positivos y menores a 3.

Salida:  Mostrar doble y triple de un número.
*/
#include <iostream>
using namespace std;
int main()
{
  int num, opcion, dob, tri;
  opcion = 0;
  dob = 0;
  tri=0;
  do
  {
    cout << "====MENU====" << endl;
    cout << "1. El doble de un numero." << endl;
    cout << "2. El triple de un numero." << endl;
    cout << "3. Salir." << endl;
    cin >> opcion;
    switch (opcion)
    {
      case 1:
      cout << "Ingresar el numero entero para calcular su doble:";
      cin >> num;
      while (num < 0)
      {
        cout << "ERROR!! Ingresar numeros enteros positivos obligatoriamente!!. Realizar otro intento!!:";
        cin >>num;
      }
      dob = num * num;
      cout<< "El doble de su numero es:" << dob << endl;
      break;
      case 2:
      cout << "Ingresar el numero entero para calcular su triple:";
      cin >> num;
      while (num < 0)
      {
        cout << "ERROR!! Ingresar numeros enteros positivos obligatoriamente!!. Realizar otro intento!!:";
        cin >> num;
      }
      tri = num * num * num;
      cout << "El triple de su numero es:" << tri << endl;
      break;
      case 3:
      cout<<"Saliendo del programa...."<<endl;
      break;
      default:
      cout<<"ERROR!! Ingresar una opcion de 1 a 3 prohibido otro valor. Realizar otro intento!!:"<<endl;
    }
  } while (opcion < 3);
}
