#include <stdio.h>
#include "funciones.h"
#include <string.h>

void leerNombreProducto(char productos[10][50], float precio[10], int num, int i){
    printf("Ingrese el producto numero %d:",num);
    scanf("%s",&productos[i]);
    printf("Ingrese el precio del producto %d: ",num);
    scanf("%f",&precio[i]);
}

void imprimirNombreProducto(char productos[10][50], float precio[10],int num, int i){
    printf("El nombre del producto %d es: %s\n",num,productos[i]);
    printf("El precio del producto es: %f\n",precio[i]);
}

void buscarProducto(char productos[10][50], float precio[10],char productoBuscar[50]){
    int validar=0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(productos[i],productoBuscar)==0)
        {
            printf("El precio del producto %s es : %f\n",productoBuscar,precio[i]);
            validar=1;
        }  
    }
    if (validar==0)
    {
        printf("No existe el producto buscado\n");
    }
    
}