#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    char nombre[50];
    char apellido[50];
    float altura;

    int idEmpleado;

}Empleado;

Empleado* empleado_new();
Empleado* empleado_newParametros(char* nombre,char* apellido,float altura);
void empleado_delete(Empleado* this);//this se refiere al empleado, que es el mismo contexto de cada funcion

int empleado_setNombre(Empleado* this,char* nombre);
int empleado_getNombre(Empleado* this,char* nombre);
 //estas 3 funciones se repiten por cada atributo de las entidades

int empleado_setApellido(Empleado* this,char* apellido);
int empleado_getApellido(Empleado* this,char* apellido);


int empleado_setAltura(Empleado* this,float altura);
int empleado_getAltura(Empleado* this,float* altura);

int empleado_compareNombre(void* thisA,void* thisB);
void empleado_print(Empleado* this);
#endif // EMPLEADO_H_INCLUDED
