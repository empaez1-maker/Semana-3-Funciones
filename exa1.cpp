/*
Nombre del estudiante: Eathan Páez
Fecha: 09/09/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
#include <string>

using namespace std;

// 0. MAIN 
int main() {
    string nombres[20];
    int notas[20];
    int cantidad = 0;
    int opcion;

    do {
        cout << "\n=========== MENÚ ===========" << endl;
        cout << "1. Registrar estudiantes y notas" << endl;
        cout << "2. Mostrar reporte general" << endl;
        cout << "3. Buscar estudiante por nombre" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        while (opcion < 1 || opcion > 4) {
            cout << "ERROR!! Seleccione una opcion valida (1 a 4): ";
            cin >> opcion;
        }

        switch (opcion) {
            case 1:
                cantidad = registrarEstudiantes(nombres, notas);
                break;
            case 2:
                if (cantidad == 0) {
                    cout << "\n[!] Todavia no existen datos registrados. Seleccione la opcion 1 primero." << endl;
                } else {
                    mostrarReporte(nombres, notas, cantidad);
                }
                break;
            case 3:
                if (cantidad == 0) {
                    cout << "\n[!] Todavia no existen datos registrados. Seleccione la opcion 1 primero." << endl;
                } else {
                    buscarEstudiante(nombres, notas, cantidad);
                }
                break;
            case 4:
                cout << "\nSaliendo del programa..." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

// 1. REGISTRAR ESTUDIANTES Y NOTAS
int registrarEstudiantes(string nombres[], int notas[]) 
{
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes (1 a 20): ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > 20) {
        cout << "ERROR!! La cantidad debe estar entre 1 y 20. Intente nuevamente: ";
        cin >> cantidad;
    }

    for (int i = 0; i < cantidad; i++) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nombres[i];

        cout << "Nota (0 a 20): ";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20) {
            cout << "ERROR!! Ingrese una nota valida entre 0 y 20: ";
            cin >> notas[i];
        }
    }

    cout << "¡Datos guardados correctamente!" << endl;
    return cantidad;
}

// 2. MOSTRAR REPORTE GENERAL
void mostrarReporte(string nombres[], int notas[], int cantidad) 
{
    int suma = 0;
    int aprobados = 0;
    int reprobados = 0;
    int posMayor = 0;
    int posMenor = 0;

    cout << "================ REPORTE GENERAL ================" << endl;
    for (int i = 0; i < cantidad; i++) {
        string estado;
        if (notas[i] >= 14) {
            estado = "APROBADO";
            aprobados++;
        } else {
            estado = "REPROBADO";
            reprobados++;
        }

        cout << i + 1 << ". " << nombres[i] << " - Nota: " << notas[i] << " - Estado: " << estado << endl;

        suma = suma + notas[i];

        if (notas[i] > notas[posMayor]) {
            posMayor = i;
        }
        if (notas[i] < notas[posMenor]) {
            posMenor = i;
        }
    }

    int promedio = suma / cantidad;

    cout << "------------------------------------------------" << endl;
    cout << "Promedio general: " << promedio << endl;
    cout << "Estudiante con mayor nota: " << nombres[posMayor] << " (" << notas[posMayor] << ")" << endl;
    cout << "Estudiante con menor nota: " << nombres[posMenor] << " (" << notas[posMenor] << ")" << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;
    cout << "================================================" << endl;
}

// 3. BUSCAR ESTUDIANTE POR NOMBRE
void buscarEstudiante(string nombres[], int notas[], int cantidad)
 {
    string buscando;
    bool encontrado = false;

    cout << "\nIngrese el nombre a buscar: ";
    cin >> buscando;

    for (int i = 0; i < cantidad; i++) 
    {
        if (nombres[i] == buscando && encontrado == false) 
        {
            string estado;
            if (notas[i] >= 14) {
                estado = "APROBADO";
            } else {
                estado = "REPROBADO";
            }

            cout << "Estudiante encontrado:" << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;
            cout << "Estado: " << estado << endl;
            encontrado = true;
        }
    }

    if (encontrado == false) 
    {
        cout << "El estudiante '" << buscando << "' no fue encontrado." << endl;
    }
}


