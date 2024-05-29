/*Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos:
Nombre, edad, direccion, ciudad, telefono*/

#include <iostream>

#define MAX_STR 60
#define MAX_REG 100

using namespace std;

struct CONTACTO
{
    char nombre[MAX_STR];
    int edad;
    char direccion[MAX_STR];
    char ciudad[MAX_STR];
    char telefono[MAX_STR];
};

CONTACTO agenda[MAX_REG];
int pos = 0;

int main(int argc, char const *argv[])
{
    cout << "Ingrese los datos" << endl;
    cout << "Ingrese el nombre: ";
    scanf(" %[^\n]", agenda[pos].nombre);
    cout << "Ingrese la edad: ";
    scanf("%d", &agenda[pos].edad);
    cout << "Ingrese la direccion: ";
    scanf(" %[^\n]", agenda[pos].direccion);
    cout << "Ingrese la ciudad: ";
    scanf(" %[^\n]", agenda[pos].ciudad);
    cout << "Ingrese el telefono: ";
    scanf("%s", agenda[pos].telefono);
    return 0;
}
