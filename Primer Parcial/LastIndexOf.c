# include <stdio.h>

int indexOf(char Cadena [40], char Caracter);
int main ()
{
    char Cadena [40], Caracter;
    int Long = 0;
    printf("Ingrese un texto: ");

    gets(Cadena);
    printf("\nIngrese el caracter a buscar: ");
    scanf(" %c", &Caracter);

    int index = indexOf(Cadena, Caracter);
    if (index != -1)
    {
        printf("\nEl index es: %d", index);
    }
    else
    {
        printf("\nNo Existe el caracter en la Cadena");
    }
    
    

     
    
}
int indexOf(char Cadena [40], char Caracter)
{
    char * Ptr;
    int Long = 0;
    int SinEspacios = 0;
    

    //Recorre el arreglo hasta obtener el último cáracter
    for(Ptr = Cadena; *Ptr != '\0'; Ptr = Ptr + 1, Long++)
    {
        
    }
    //Recorre el arreglo en sentido contrario a partir del último cáracter
    for(Ptr; Ptr >= Cadena; Ptr = Ptr - 1, Long --)
    {
        // Cuando sea el mismo caracter regresar el indice
        if (*Ptr == Caracter)
        {
            return Long;
        }
    }    
    return -1;

}