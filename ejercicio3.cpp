/*Se dispone de un archivo indexado (DNI National Identity Document en
orden ascendente) denominado empleados.dat, que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.
Altos: mas de 50,000
medios: de 10,000 a 50,000
bajos: menos de 10,000*/
// DNI, Nombre, Apellidos, Sexo, Cargo, Salario

#include <iostream>

using namespace std;

#define MAX_STR 60
#define MAX_REG 100

struct EMPLEADO
{
    int DNI;
    char nombre[MAX_STR];
    char apellidos[MAX_STR];
    char sexo;
    char cargo[MAX_STR];
    float salario;
};

EMPLEADO empleados[MAX_REG];
int pos = 0;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingrese el numero de empleados a categorizar: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Ingrese los datos del elmpleado:\n";
        cout << "Ingrese el DNI: ";
        scanf("%d", &empleados[pos].DNI);
        cout << "Ingrese el nombre: ";
        scanf("%s", empleados[pos].nombre);
        cout << "Ingrese los apellidos: ";
        scanf(" %[^\n]", empleados[pos].apellidos);
        cout << "Ingrese el sexo: ";
        scanf("%s", empleados[pos].sexo);
        cout << "Ingrese el cargo: ";
        scanf(" %[^\n]", empleados[pos].cargo);
        cout << "Ingrese el salario: ";
        scanf("%f", &empleados[pos].salario);

        if (empleados[i].salario > 50000)
        {
            cout << "Salario alto\n";
        }
        else if (empleados[i].salario >= 10000 && empleados[i].salario <= 50000)
        {
            cout << "Salario medio\n";
        }
        else
        {
            cout << "salario bajo\n";
        }
        pos++;
    }

    return 0;
}
