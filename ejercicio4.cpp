/*Se dispone de un archivo denominado stock.dat correspondiente a la 
existencia de artículos de un almacén. Se desea señalar aquellos artículos cuyo nivel de 
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer 
Pedido". Cada artículo contiene un registro con los siguientes campos: 
Código, Nivel_minimo, Nivel_actual, Proveedor y Precio*/
#include <iostream>

using namespace std;

#define MAX_STR 60
#define MAX_REG 2

struct ARTICULO{
    int codigo;
    int nivelMinimo;
    int nivelActual;
    char proveedor[MAX_STR];
    float precio;

};

ARTICULO articulos[MAX_REG];
int pos = 0;

int main(int argc, char const *argv[])
{
    for(int i = 0; i < MAX_REG; i++){
        cout << "Ingrese los datos del articulo:" << endl;
        cout << "Ingrese el codigo del articulo: ";
        scanf("%d", &articulos[pos].codigo);
        cout << "Ingrese el nivel minimo del articulo: ";
        scanf("%d", &articulos[pos].nivelMinimo);
        cout << "Ingrese el nivel actual del articulo: ";
        scanf("%d", &articulos[pos].nivelActual);
        cout << "Ingrese el proveedor: ";
        scanf(" %[^\n]", articulos[pos].proveedor);
        cout << "Ingrese el precio del articulo: ";
        scanf("%f", &articulos[pos].precio);
        pos++;
    }

    for(int i = 0; i < MAX_REG; i++){
        if(articulos[i].nivelActual < articulos[i].nivelMinimo){
            cout << "Alerta: Hacer Pedido para el articulo con codigo " << articulos[i].codigo << endl;
        }
    }

    return 0;
}
