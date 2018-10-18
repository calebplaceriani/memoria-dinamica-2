#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "service.h"
#include "user.h"

void ordenar(void** lista,int limite, int (*comparar)(void*,void*));

int main()
{
    Empleado* listaEmpleados[1000];
    int qtyEmpleados = 0;
    int i;
    char auxiliar[50];


    for(i=0;i<100;i++)
    {
        sprintf(auxiliar,"Juan_%d",i);
        listaEmpleados[i]=empleado_newParametros(auxiliar,"aakjkajskj",1.89);
        qtyEmpleados++;
    }

    void ordenar(listaEmpleados,qtyEmpleados);

    for(i=0;i<qtyEmpleados;i++)
    {
        empleado_print(listaEmpleados[i]);
    }



    Service* listaServices[1000];
    int qtyServices=0;

    for(i=0;i<100;i++)
    {

       listaServices[i]=service_newParametros(i,"Hola");
       qtyServices++;
    }

     for(i=0;i<qtyEmpleados;i++)
    {
        service_print(listaServices[i]);
    }



    return 0;
}

void ordenar(void** lista,int limite, int (*comparar)(void*,void*))
{
    int flagSwap;
    int i;
    void* auxiliarPunteros;

    do
    {
        flagSwap=0;
        for(i=0;i<limite-1;i++)
        {
            if(empleado_compareNombre(lista[i],lista[i+1])>0)
            {
                auxiliarPunteros=lista[i];
                lista[i]=lista[i+1];
                lista[i+1]= auxiliarPunteros;
                flagSwap=1;
            }
        }

    }while(flagSwap);

}
