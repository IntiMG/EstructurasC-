/*El director de un colegio, desea un programa de computadora que procese 
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes 
alumnos de una asignatura, con el fin de obtener la siguiente información: 
#carnet, nombre, apellidos, nota final
A. Impresión a pantalla de todos los registros. 
B. La nota más alta y número de identificación del alumno correspondiente. Si existen 
varios alumnos con la misma nota más alta, se deberán visualizar todos ellos. 
C. Nota promedio del curso. */

#include <iostream>

using namespace std;

#define MAX_REG 1000
#define MAX_STR 60

struct CALIFICACION{
    int carnet;
    char nombre[MAX_STR];
    char apellidos[MAX_STR];
    int notaFinal;
};

CALIFICACION notas[MAX_REG];

int pos = 0;

void addReg();
void showReg();
void showhighestGrade();
float average();
void menu();

int main() 
{
    menu();
    return 0;
}

void addReg(){
    cout << "Ingrese los datos del estudiante: ";
    cout << "Ingrese el # de carnet: ";
    scanf("%d", &notas[pos].carnet);
    cout << "Ingrese el nombre del estudiante: ";
    scanf("%s", notas[pos].nombre);
    cout << "Ingrese los apellidos del estudiante: ";
    scanf(" %[^\n]", notas[pos].apellidos);
    cout << "Ingrese la nota final del estudiante: ";
    scanf("%d", &notas[pos].notaFinal);
    pos++;
}

void showReg(){
    for(int i = 0; i < pos; i++){
        printf("#Carnet: %d \nNombre: %s \nApellidos: %s \nNota Final: %d", notas[i].carnet, notas[i].nombre, notas[i].apellidos, notas[i].notaFinal);
        cout <<"\n*******************************************************\n";
    }
}

void showhighestGrade(){
    int notaMasAlta = 0;
    int carnetNotaMasAlta = 0;

    for(int i = 0; i < pos; i++){
        if(notas[i].notaFinal > notaMasAlta){
            notaMasAlta = notas[i].notaFinal;
            carnetNotaMasAlta = notas[i].carnet;
        }
    }
    
    cout << "La nota mas alta es: " << notaMasAlta << endl;
    cout << "El #Carnet de los que sacaron esta nota son los siguientes:\n";
    for(int i = 0; i < pos; i++){
        if(notas[i].notaFinal == notaMasAlta){
            cout << notas[i].carnet << "\n";
        }
    }
    
}

float average(){
    float suma = 0;
    float promedio = 0;

    for(int i = 0; i < pos; i++){
        suma += notas[i].notaFinal;
    }
    promedio = suma/pos;
    return promedio;
}

void menu(){
    int opcion = 0;
    do{
        system("cls || clear");
        cout << "1. Agregar nota del alumno\n";
        cout << "2. Mostrar todos los registros\n";
        cout << "3. Mostrar nota mas alta\n";
        cout << "4. Calcular promedio\n";
        cout << "5. Salir\n";
        cout << "Digite su opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                addReg();
                system("Pause");
                break;
            case 2:
                showReg();
                system("Pause");
                break;
            case 3:
                showhighestGrade();
                system("Pause");
                break;
            case 4:
                cout << "El promedio de las notas es de: " << average() << endl;
                system("Pause");
                break;
            case 5:
                break;
            default:
                cout << "Opcion invalida...\n";
        }
    }while(opcion != 5);
}