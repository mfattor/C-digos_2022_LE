#include <stdio.h>
#include <stdlib.h>

//Código de Mateo Fattor

int opcion = 1;

struct alumnos{
        char nombre[20];
        char apellido[20];
        int nota;
        struct alumnos *next;
};

void pedir_datos(struct alumnos *p)
{
    printf("Ingrese nombre del alumno:");
    scanf("%s", p->nombre);
    printf("Ingrese apellido del alumno:");
    scanf("%s", p->apellido);
    printf("Ingrese nota del alumno:");
    scanf("%d", &(p->nota));
    
    printf("-------------------------------------\n");
    printf("¿Desea ingresar los datos de otro alumno?\n");
    printf("Si lo desea, presione 1\n");
    printf("Si no lo desea presione 0\n");
}

void imprimir(struct alumnos p)
{
    printf("------------------------------------\n");
    printf("Datos ingresados\n");
    printf("Nombre del alumno: %s\n", p.nombre);
    printf("Apellido del alumno: %s\n", p.apellido);
    printf("Nota del alumno: %d\n", p.nota);
}

int main()
{
    struct alumnos *q=NULL;
    while(opcion == 1){
        q=malloc(sizeof(struct alumnos));
        pedir_datos(q);
        scanf("%d", &opcion);
    }
    imprimir(*q);
}