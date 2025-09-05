#include <stdio.h>

struct Dato
{
    int Arreglo [5], *PtrInterno;
};
int main()
{
    struct Dato dato, *PtrExterno;

    PtrExterno = &dato;

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
