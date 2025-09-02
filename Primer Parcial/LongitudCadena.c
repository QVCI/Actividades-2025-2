# include <stdio.h>

int main ()
{
    char Cadena [40], * Ptr;
    int Long = 0;
    printf("Ingrese un texto: ");

    gets(Cadena);

    for(Ptr = Cadena; *Ptr != '\0'; Ptr = Ptr + 1)
    {
        Long ++;
    }
    printf("La longitud de la cadena es de: %d", Long);
}