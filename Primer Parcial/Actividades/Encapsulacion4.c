#include <stdio.h>

struct Dato
{
    int Arreglo [5], *PtrInterno;
};
int main()
{
    //Se crea una instancia "Dato" y un apuntador de tipo Estructura "Dato", para poder ingresar al mismo
    struct Dato dato, *PtrExterno;

     //Al apuntador se le asigna la direccion de memoría correspondiente a la instancia de la clase dato
    PtrExterno = &dato;

    //Con el apuntador externo, se accede a el apuntador Interno, que a su vez accede a el arreglo
    for(PtrExterno ->PtrInterno = dato.Arreglo;
        PtrExterno ->PtrInterno < &dato.Arreglo[5];
        PtrExterno ->PtrInterno = PtrExterno ->PtrInterno + 1

    )
    {
        
        printf("\nIngrese un dato: ");
        scanf("%d", PtrExterno->PtrInterno);
        
    }

     for(PtrExterno ->PtrInterno = dato.Arreglo;
        PtrExterno ->PtrInterno < &dato.Arreglo[5];
        PtrExterno ->PtrInterno = PtrExterno ->PtrInterno + 1

    )
    {
        
       printf("\nEn la celda: %d.\nEl valor: %d.\nEn la Direccion: %lu\n", 
        (int)(PtrExterno->PtrInterno - PtrExterno->Arreglo), *PtrExterno->PtrInterno, PtrExterno->PtrInterno);
        
    }
    return 0;
}
