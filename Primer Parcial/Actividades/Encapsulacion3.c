#include <stdio.h>
struct Dato
{
    int Arreglo [5], i;
};

int main()
{
    struct Dato dato, *Ptr;
    Ptr = &dato;

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