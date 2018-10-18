#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "service.h"
#include "user.h"

static int isValidNombre(char* nombre);
static int isValidEmail(char* email);

User* user_new()
{
    return (User*)malloc(sizeof(User*));
}

User* user_newParametros(char* nombre,char* email)
{
    User* this = user_new();

    if(this==NULL ||
        user_setNombre(this,nombre)
        ||
        user_setEmail(this,email))
        {
            user_delete(this);
            this = NULL;

        }
    return this;
}

void user_delete(User* this)
{
    free(this);
}
// FALTA TERMINAR ESTO
