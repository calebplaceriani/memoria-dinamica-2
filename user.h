#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

typedef struct
{
    int id;
    char name[33];
    char email[65];
}User;

User* user_new();
User* user_newParametros(char* nombre,char* email);

void user_delete(User* this);//this se refiere al empleado, que es el mismo contexto de cada funcion

int user_setNombre(User* this,char* nombre);
int user_getNombre(User* this,char* nombre);

int user_setEmail(User* this,char* email);
int user_getEmail(User* this,char* email);

void user_print(User* this);

#endif // USER_H_INCLUDED
