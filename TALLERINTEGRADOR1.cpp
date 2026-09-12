/*
TALLER INTEGRADOR 1.

Mini-Proyecto Integrador C++.

Sistema de gestión personalizado en consola.

Autor: Eathan Páez.

Fecha: 8 de septiembre del 2026.

¿Que hicimos?

Se creo un programa en C++ con un menú para gestionar las notas de 21 estudiantes de un curso de decimo año. Permite ingresar y validar notas, buscar una calificación y mostrar su posición, identificar estudiantes que necesitan recuperación, calcular el promedio del curso y mostrar los estudiantes con nota perfecta. También incluye una opción para salir del programa.

E/P/S

Entrada: Opciones del menú, notas de los 21 estudiantes y la nota que se desea buscar.

Proceso: Validar que las notas estén entre 0 y 10, buscar una calificación, identificar estudiantes que necesitan recuperación, calcular el promedio y determinar la mejor nota.

Salida: Notas guardadas, posición de la nota buscada, estudiantes que necesitan recuperación, promedio del curso, estudiante con mejor calificación y mensajes del menú.
*/
#include <iostream>
using namespace std;
int main()
{
  int i, buscando, opcion, promedio, num, mej;
  int nota[21];
  int suma = 0;
  int cont = 0;
  int posicion = -1;
  bool encontrado = false;
  do
  {
    cout << "====MENU DE NOTAS DE ESTUDIANTES DE DECIMO(PARALELO A)====" << endl;
    cout << "1.Notas de los estudiantes y buscar sus respectivas notas." << endl;
    cout << "2.Estudiantes que necesitan recuperacion." << endl;
    cout << "3.Promedio y numero de estudiantes en el curso." << endl;
    cout << "4.Los estudiante con las notas mas altas del curso." << endl;
    cout << "5.Salir." << endl;
    cout<<"Elija una opcion:"<<endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
      cout << "En este apartado vamos a ingresar las notas de cada estudiante y si por a o b situacion queremos buscar la nota del estudiante lo podemos realizar!!." << endl;
      for (i = 0; i < 21; i++)
      {
        cout << "Ingresar la nota del estudiante" << i + 1 << "(desde 0 hasta 10):";
        cin >> nota[i];
        while (nota[i] < 0)
        {
          cout << "ERROR!! Ingresar notas positivas obligatoriamente , nada de valores negativos. Intente nuevamente!!:";
          cin >> nota[i];
        }
        while (nota[i] > 10)
        {
          cout << "ERROR!! Ingresar numeros hasta el 10, prohibido valores superiores al 10. Realizar otro intento!!:";
          cin >> nota[i];
        }
      }
      cout << "Las notas de los estudiantes se guardaron exitosamente!!" << endl;
      cout << endl;
      cout << "La posicion en donde se guardaron las notas de los estudiantes son las siguentes:" << endl;
      for (i = 0; i < 21; i++)
      {
        cout << "Posicion" << i << ":" << nota[i] << endl;
      }
      cout << endl;
      cout << "Ingresar la nota que desea buscar del estudiante:";
      cin >> buscando;
      for (i = 0; i < 21; i++)
      {
        if (nota[i] == buscando && encontrado == false)
        {
          encontrado = true;
          posicion = i;
        }
      }
      cout << endl;
      if (encontrado == true)
      {
        cout << "La nota buscada del estudiante esta en la posicion:" << posicion << endl;
      }
      else
      {
        cout << "La nota del estudiante no fue encontrada" << endl;
      }
      cout << endl;
      break;
    case 2:
      cout << "En este apartado vamos a volver a ingresar las notas de cada estudiante para saber que estudiante nesecita ir a clases de recuperacion!!." << endl;
      for (i = 0; i < 21; i++)
      {
        cout << "Ingresar nuevamente la nota del estudiante" << i + 1 << "por seguna vez(desde 0 hasta 10):";
        mej=i+1;
        cin >> num;
        while (num < 0)
        {
          cout << "ERROR!! Ingresar notas positivas obligatoriamente , nada de valores negativos. Intente nuevamente!!:";
          cin >> num;
        }
        while (num > 10)
        {
          cout << "ERROR!! Ingresar numeros hasta el 10, prohibido valores superiores al 10. Realizar otro intento!!:";
          cin >> num;
        }
        if (num < 7)
        {
          cout << "El estudiante" << mej<< "tiene que ir a clases de recuperacion obligatoriamente!!" << endl;
        }
        else
        {
          cout << "El estudiante"<< mej<<"no tiene que ir a clases de recuperacion" << endl;
        }
      }
      cout << endl;
      break;
      case 3:
      cout << "En este apartado vamos a volver a ingresar las notas de cada estudiante para saber el promedio del curso." << endl;
      for (i = 0; i < 21; i++)
      {
        cout << "Ingresar nuevamente la nota del estudiante" << i + 1 << "por tercera vez(desde 0 hasta 10):";
        cin >> num;
        while (num < 0)
        {
          cout << "ERROR!! Ingresar notas positivas obligatoriamente , nada de valores negativos. Intente nuevamente!!:";
          cin >> num;
        }
        while (num > 10)
        {
          cout << "ERROR!! Ingresar numeros hasta el 10, prohibido valores superiores al 10. Realizar otro intento!!:";
          cin >> num;
        }
        suma = suma + num;
        cont++;
      }
      promedio = suma / 21;
      cout << "El promedio del curso es:" << promedio << "/10" << endl;
      cout << "El numero de estudiantes en el curso es de:" << cont << endl;
      cout << endl;
      break;
    case 4:
      cout << "En este apartado vamos a conocer cuales son los estudiante con mayor nota del curso , pero para eso es nesecario ingresar nuevamente las notas de los estudiantes." << endl;
      for (i = 0; i < 21; i++)
      {
        cout << "Ingresar nuevamente la nota del estudiante" << i + 1 << "por cuarta vez(desde 0 hasta 10):";
        cin >> num;
        mej = i + 1;
        while (num < 0)
        {
          cout << "ERROR!! Ingresar notas positivas obligatoriamente , nada de valores negativos. Intente nuevamente!!:";
          cin >> num;
        }
        while (num > 10)
        {
          cout << "ERROR!! Ingresar numeros hasta el 10, prohibido valores superiores al 10. Realizar otro intento!!:";
          cin >> num;
        }
        if (num==10)
        {
          cout<<"El estudiante"<<mej<<"tiene la nota mas alta del curso. Se merece un premio!!"<<endl;
        }
        else if (num<10 && num>=8)
        {
          cout<<"El estudiante"<<mej<<"es uno de los alumnos que tiene las mejores notas del curso.  Muchas felicidades!!"<<endl;
        }
        else if(num==7)
        {
          cout<<"El estudiante"<<mej<<"tiene una nota minima entre todos los alumnos del curso"<<endl;
        }
        else 
        {
          cout << "El estudiante" << mej << "tiene una nota baja entre todos los alumnos del curso. Hay que mejorar!!" << endl;
        }
      }
      cout<<endl;
        break;
       case 5:
        cout << "Saliendo del programa....." << endl;
        break;
        default:
        cout << "ERROR!! Ingresar una opcion del menu obligatoriamente, no otro valor. Realizar otro intento!!:" << endl;
      
    }
  }while (opcion != 5);
}
    
  
