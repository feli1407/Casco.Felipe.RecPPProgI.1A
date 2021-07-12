#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    int precio;
}Notebook;

float aplicarDescuento(int precioDelProducto);
int contarCaracteres(char cadena[], char caracter);
int ordenarArrayPorMarca(Notebook* list, int tam);

int main()
{
    int precioP;
    float precioConDescuento;
    char cadena[] = {"Roberto"};
    char caracter = 'o';
    int cantidadDeO;
    printf("Ingrese precio del producto: ");
    scanf("%d",&precioP);
    precioConDescuento = aplicarDescuento(precioP);
    printf("El precio con descuento es: %.2f\n",precioConDescuento);
    cantidadDeO=contarCaracteres(cadena,caracter);
    printf("La cantidad de letras O en roberto es: %d\n",cantidadDeO);


    return 0;
}

float aplicarDescuento(int precioDelProducto)
{
    return precioDelProducto * 0.95;
}

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int tam;
    if(cadena != NULL)
    {
        tam = strlen(cadena);
        for(int i=0;i<tam;i++)
        {
            if(cadena[i]== caracter)
            {
                contador++;
            }
        }
    }
    return contador;
}

int ordenarArrayPorMarca(Notebook* list, int tam)
{
    int todoOk=0;
    Notebook* aux;
    if(list!=NULL && tam>0)
    {
        for(int i=0; i<len-1; i++)
            {
                for(int j=i+1; j<len; j++)
                {
                    if(list[i].marca>list[j].marca||
                            (list[i].marca==list[j].marca))
                    {
                        aux=marca[i];
                        marca[i]=list[j];
                        list[j]=aux;
                    }
                }
            }
    }
}
