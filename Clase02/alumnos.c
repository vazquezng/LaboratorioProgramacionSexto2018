#include <stdio.h>
#include <string.h>

#define TAM_ALUMNOS 5
#define TAM_NOMBRE 50

struct Persona
{
     char nombre[50];
     int edad;
};

int main(void){
  struct Persona alumnos[TAM_ALUMNOS];
  char nombreAlumno[TAM_NOMBRE];
  int contador = 0;
  for(contador; contador<TAM_ALUMNOS; contador++){
    puts("##########");
    printf("Ingrese el nombre del alumno %d\n", (contador + 1));
    scanf("%s", &alumnos[contador].nombre);
    printf("Ingrese la edad de %s\n", alumnos[contador].nombre);
    fflush(stdin);
    scanf("%d", &alumnos[contador].edad);
  }

  puts("\nYa ingreso todos los alumnos.\n A continuación brindamos el listado");

  for(contador = 0; contador<TAM_ALUMNOS; contador++){
    puts("##########");
    printf("ALUMNO: %s\n", alumnos[contador].nombre);
    printf("EDAD: %d\n", alumnos[contador].edad);
    puts("##########");
  }
  puts("########## GRACIAS POR USAR EL SISTEMA DE IPE ###########");


  return 0;
}
