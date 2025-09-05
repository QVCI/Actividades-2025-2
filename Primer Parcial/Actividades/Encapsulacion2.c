#include <stdio.h>
struct Dato
{
    int Arreglo [5], *Ptr;
};

int main()
{

    //Se crea una instancia "Dato", para poder ingresar al mismo
    struct Dato dato;

    //Se extraen las variables de dato.
    // Se usa el aputador, para avanzar dentro del arreglo

    for(dato.Ptr = dato.Arreglo; dato.Ptr < &dato.Arreglo[5]; dato.Ptr = dato.Ptr + 1)
    {
        printf("\nIngrese un dato: ");
        scanf("%d", dato.Ptr);
    }
    

    for(dato.Ptr = dato.Arreglo; dato.Ptr < &dato.Arreglo[5]; dato.Ptr = dato.Ptr + 1)
    {
        printf("\nEn la celda: %d.\nEl valor: %d.\nEn la Direccion: %lu\n", (int)(dato.Ptr - dato.Arreglo), *dato.Ptr, dato.Ptr);

    }
    

    return 0;
}