#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {
    char productos[10][50];
    float precio[10];
    char productobuscar[50]="arroz";
    leerNombreProducto(productos,precio,1,0);
    imprimirNombreProducto(productos,precio,1,0);
    buscarProducto(productos,precio,productobuscar);

    return 0;
}