#define TAM 50
#include <stdio.h>
#include <math.h>
struct datoEst
{
    int Arreglo [TAM], *Ptr;
    float promedio, desvEstandar;
    int num;    //datos Ingresados
};
int IngresarDato(struct datoEst*Ptr);
int ImprimeDato(struct datoEst*Ptr);
int main()
{
    struct datoEst misdatos, *Ptrs;
    Ptrs = &misdatos;
    misdatos.num=0;
    int opc = -1;

    while (opc!= 3)
    {
        
        printf("\n\nMenu");
        printf("\n1.-Meter los datos.");
        printf("\n2.-Imprimir los datos.");
        printf("\n3.-Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opc);
        if (opc == 1)
        {
            IngresarDato(Ptrs);
           
        }


        if (opc == 2)
        {
            ImprimeDato(Ptrs);
            
        }

      
        
    }

    
    return 0;
}
int IngresarDato(struct datoEst*Ptr)
{
    if (Ptr->num < TAM) 
    {
        int valor;
        printf("\nIngrese un numero: ");
        scanf("%d", &valor);

        Ptr->Arreglo[Ptr->num] = valor;
        
        Ptr->num++;
        printf("\nValor numero %d de %d", (Ptr->num), TAM);
    }     
    else
    {
        printf("\nEl arreglo ya esta lleno, no se pueden agregar ms valores.\n");
    }

    return 0;
}
int ImprimeDato(struct datoEst*Ptrs)
{
    float suma = 0;
    printf("\nDatos en lista: ");
    for (Ptrs->Ptr = Ptrs->Arreglo; 
    Ptrs->Ptr < Ptrs->Arreglo + Ptrs->num; 
    Ptrs->Ptr++)
    {
        suma += *Ptrs->Ptr;  

        if (Ptrs->Ptr == Ptrs->Arreglo)
        {          
            printf("%d", *Ptrs->Ptr);
        }        
        else
        {         
            printf(", %d", *Ptrs->Ptr);
        }
            
    }
                  
    Ptrs->promedio = suma / Ptrs->num;
    printf("\nEl Promedio es: %.2f", Ptrs->promedio);

    float sumaCuadrados = 0;
            
    for (Ptrs->Ptr = Ptrs->Arreglo;         
        Ptrs->Ptr < Ptrs->Arreglo + Ptrs->num;         
        Ptrs->Ptr++)    
        {     
            sumaCuadrados += pow(*Ptrs->Ptr - Ptrs->promedio, 2);     
        }   
    Ptrs->desvEstandar = sqrt(sumaCuadrados / Ptrs->num);
           
    printf("\nLa Desviacion Estandar es: %.2f", Ptrs->desvEstandar);

}

