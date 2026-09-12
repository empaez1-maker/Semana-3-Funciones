/*
Ejercicio 4: Nota final con ponderaciones.

Autor: Eathan Páez.

Fecha: 2 de septiembre 2026.

Enunciado: Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
nota final.

E/P/S

Entrada: Parcial1,Parcial2,Proyecto,nota1,nota2,nota3.

Proceso: Calcular mediante formulas el porcentaje de las ponderaciones de las calificaciones del estudiante para darle la nota final al estudiante,la nota en porcentaje de acuerdo a cuanto es de las ponderaciones, la suma de las notas en porcentaje,la nota final pero no en porcentaje. Validar que los porcentajes esten entre 30% y el 40%. Validar que las notas esten entre 0 y 10.

Salida: La nota final del estudiante.
*/
#include <iostream>
using namespace std;
int main()
{
  double P1, P2, P, n1, n2, n3, NPP1, NPP2, NPP, NFP, NF;
  NPP1 = 0;
  NPP2 = 0;
  NPP = 0;
  NFP = 0;
  NF = 0;
  cout << "BIENVENIDO AL CALCULADOR DE NOTAS CON PONDERACIONES, MOSTRANDO LA NOTA FINAL DEL ESTUDIANTE!!" << endl;
  cout << "Ingresar la nota del estudiante respecto al parcial 1(ejm: 8.5 o 10): ";
  cin >> n1;
  while (n1 < 0)
  {
    cout << "ERROR!! Ingresar unicamente notas positivas obligatoriamente. Realizar otro intento!!:";
    cin >> n1;
  }
  while (n1 > 10)
  {
    cout << "ERROR!! Ingresar notas hasta 10. Realizar otro intento!!:";
    cin >> n1;
  }
  cout << "Ingresar la ponderacion de porcentaje en decimal del parcial 1 (que es: 30% en el 0.3):";
  cin >> P1;
  while (P1 < 0.3)
  {
    cout << "ERROR!! Ingresar la ponderacion asignada que es positiva , ya que es: 0.3 correspondiente al parcial 1, no un valor inferior al mencionado. Intente de nuevo!!:";
    cin >> P1;
  }
  while (P1 > 0.3)
  {
    cout << "ERROR!! Ingresar la ponderacion del parcial 1 que es: 0.3, no otro valor superior. Intente de nuevo!!:";
    cin >> P1;
  }
  cout << "Ingresar la nota del estudiante respecto al parcial 2(ejm: 9.5 o 10):";
  cin >> n2;
  while (n2 < 0)
  {
    cout << "ERROR!! Ingresar unicamente notas positivas. Realizar otro intento!!:";
    cin >> n2;
  }
  while (n2 > 10)
  {
    cout << "ERROR!! Ingrese notas hasta 10. Realizar otro intento!!:";
    cin >> n2;
  }
  cout << "Ingresar la ponderacion de porcentaje en decimal del parcial 2 (que es: 30% en el 0.3):";
  cin >> P2;
  while (P2 < 0.3)
  {
    cout << "ERROR!! Ingresar la ponderacion asignada que es positiva , ya que es: 0.3 correspondiente al parcial 2, no un valor inferior al mencionado. Intente de nuevo!!:";
    cin >> P2;
  }
  while (P2 > 0.3)
  {
    cout << "ERROR!! Ingresar la ponderacion del parcial 2 que es: 0.3, no otro valor superior. Intente de nuevo!!:";
    cin >> P2;
  }
  cout << "Ingresar la nota del estudiante respecto al proyecto(ejm: 7.5 o 10):";
  cin >> n3;
  while (n3 < 0)
  {
    cout << "ERROR!! Ingresar unicamente notas positivas. Realizar otro intento!!:";
    cin >> n3;
  }
  while (n3 > 10)
  {
    cout << "ERROR!! Ingresar notas hasta 10. Realizar otro intento!!:";
    cin >> n3;
  }
  cout << "Ingresar la ponderacion de porcentaje en decimal del proyecto (que es: 40% en el 0.4):";
  cin >> P;
  while (P < 0.4)
  {
    cout << "ERROR!! Ingresar la ponderacion asignada que es positiva , ya que es: 0.4 correspondiente al proyecto, no un valor inferior al mencionado. Intente de nuevo!!:";
    cin >> P;
  }
  while (P > 0.4)
  {
    cout << "ERROR!! Ingresar la ponderacion del proyecto que es: 0.4, no otro valor superior. Intente de nuevo!!:";
    cin >> P;
  }
  NPP1 = (n1 * P1);
  NPP2 = (n2 * P2);
  NPP = (n3 * P);
  NFP = (NPP1 + NPP2 + NPP);
  NF = (NFP) * 1;
  cout << "La nota final del estudiante es: " << NF << endl;
  return 0;
}
