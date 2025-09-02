# include <stdio.h>

int length(char Cadena [40]);
int main ()
{
    char Cadena [40];
    int Long = 0;
    int SinEspacios = 0;
    printf("Ingrese un texto: ");

    gets(Cadena);
    printf("\nLa Longitud es de: %d",length(Cadena));

     
    
}
int length(char Cadena [40])
{
    char * Ptr;
    int Long = 0;
    int SinEspacios = 0;
    /*
        Ptr = Cadena -> Indice 0
        Mientras el char de Ptr sea diferente del caracter de fin
        Pasar al siguiente espacio del arreglo y aumentar en 1 la Longitud de la cadena

    */
    for(Ptr = Cadena; *Ptr != '\0'; Ptr = Ptr + 1, Long++)
    {
        // Buscar espacios para contarlos
        if (*Ptr == ' ')
        {
            SinEspacios++;
        }
        
    }
    // Restar los espacios a la longitud de la cadena
    printf("La cadena tiene: %d caracteres.", Long - SinEspacios);
    return Long;

}