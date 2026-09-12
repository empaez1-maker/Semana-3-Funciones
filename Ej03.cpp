/*
Ejercicio 3: Descuento por edad.

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.

E/P/S

Entrada: La edad de la persona.

Proceso: Validar que la edad de la persona este entre: 18 y 122 o 0 y 17 (con prohibicion de numeros negativos y mayores a 122).

Salida: El valor a pagar de la persona segun su edad.
*/
#include <iostream>
using namespace std;
int main()
{
  int edad;
  cout << "Ingresar su edad: ";
  cin >> edad;
  while (edad < 0)
  {
    cout << "ERROR!! Ingresar una edad que sea positiva obligatoriamente. Intente de nuevo!!:";
    cin >> edad;
  }
  while (edad > 122)
  {
    cout << "ERROR!! Ingresar una edad hasta los 122 obligatoriamente. Intente de nuevo!!:";
    cin >> edad;
  }
  if (edad >= 18)
  {
    cout << "Su precio a pagar es de $5" << endl;
  }
  else if (edad < 18)
  {
    cout << "Su precio a pagar es de $2.50" << endl;
  }
  return 0;
}
