#include <stdio.h>
struct Dato
{
    int Arreglo [5], i;
};

int main()
{
    //Se crea una instancia "Dato" y un apuntador de tipo Estructura "Dato", para poder ingresar al mismo
    struct Dato dato, *Ptr;

    //Al apuntador se le asigna la direccion de memoría correspondiente a la instancia de la clase dato
    Ptr = &dato;

    //Con el apuntador se accede a los datos del arreglo para recorrerlo
    for(Ptr->i = 0; Ptr->i < 5; Ptr->i = Ptr->i + 1)
    {
        printf("\nIngrese un dato: ");
        scanf("%d", &Ptr->Arreglo[Ptr->i]);
    }


    for(Ptr->i = 0; Ptr->i < 5; Ptr->i = Ptr->i + 1)
    {
        printf("\nEn la celda: %d.\nEl valor: %d.\nEn la Direccion: %lu\n", Ptr->i, Ptr->Arreglo[Ptr->i], Ptr);

    }
    
    

    return 0;
}