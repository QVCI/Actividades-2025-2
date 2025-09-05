#include <stdio.h>

int main()
{
    //Argumento de charAt(indice)
    int indice;
    //Index dentro del String
    int index = 0;
    char Texto[40], * Ptr;
    printf("Ingrese un texto: ");
    gets(Texto);
    printf("\nIngrese el indice del caracter: ");
    scanf("%d", &indice);



    /*
        Ptr = Texto             --> Comenzar desde el indice 0
        index <= indice         --> Mientras el index de la String, no sea mayor al argumento de charAt(indice)
        Ptr = Ptr + 1, index++  --> Pasa a la siguiente dirección de memoria de la String, y aumenta en uno el indice recorrido
    */
    for(Ptr = Texto; index <= indice; Ptr = Ptr + 1, index++)
    {
        //Cuando ambos sean iguales, se llego al indice buscado
        if (index == indice)
        {
            printf("%c", *Ptr);
        }
        
    }

}