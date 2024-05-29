/*Desarrollar un programa que permita ingresar y almacenar 5 registros de
información en el archivo agenda.dat, luego abrir el archivo e imprimir a pantalla todos
los registros.
Nombre, edad, direccion, ciudad, telefono*/

#include <iostream>

using namespace std;

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
    for (int i = 0; i < 5; i++)
    {
        cout << "\nIngrese los datos" << endl;
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
        pos++;
    }

    cout << "Los 5 registros almacenados son los siguientes: " << endl;
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre: %s \nEdad: %d \nDireccion: %s \nCiudad: %s \nTelefono: %s", agenda[i].nombre,
        agenda[i].edad, agenda[i].direccion, agenda[i].ciudad, agenda[i].telefono);

        cout << "\n******************************************************************************\n";
    }
    return 0;
}
