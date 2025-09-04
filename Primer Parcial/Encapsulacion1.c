#include <stdio.h>
struct Dato
{
    int Arreglo [5], i;
};

int main()
{
    struct Dato dato;

    for(dato.i = 0; dato.i<5; dato.i++)
    {
        printf("\nIngrese un dato: ");
        scanf("%d", &dato.Arreglo[dato.i]);
    }

    for(dato.i = 0; dato.i<5; dato.i++)
    {
        printf("\nEn la celda: %d.\nEl valor: %d.\nEn la Direccion: %lu\n", dato.i, dato.Arreglo[dato.i], &dato.Arreglo[dato.i]);

    }

    

    return 0;
}