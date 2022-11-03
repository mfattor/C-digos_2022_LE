#include <stdio.h>

//Código de Mateo Fattor

struct alumnos{
        char nombre[20];
        char apellido[20];
        int nota;
        struct alumnos *sig;
}alumno1,alumno2;

void pedir_datos(struct alumnos*p)
{
    printf("Ingrese nombre del alumno:");
    scanf("%s", p->nombre);
    printf("Ingrese apellido del alumno:");
    scanf("%s", p->apellido);
    printf("Ingrese nota del alumno:");
    scanf("%d", &(p->nota));
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
    struct alumnos*lista =&alumno1;
    alumno1.sig=&alumno2;
    alumno2.sig=NULL;
    pedir_datos(&alumno1);
    pedir_datos(&alumno2);
    imprimir(alumno1);
    imprimir(alumno2);

    
}
