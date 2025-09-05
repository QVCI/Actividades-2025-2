#include <stdio.h>

int main ()
{
    char Original[40], Invertido[40], * Ptr1;

    printf("\nIngrese un texto: ");
    gets(Original);

    //Recorre el arreglo hasta obtener el último cáracter
    for(Ptr1 = Original; *Ptr1 != '\0'; Ptr1 = Ptr1 + 1)
    {
        
    }
    printf("\nEl texto invertido es:");
    //Recorre el arreglo en sentido contrario a partir del último cáracter
    for(Ptr1; Ptr1 >= Original; Ptr1 = Ptr1 - 1)
    {
        printf("%c", *Ptr1);
    }
    return 0;
}

