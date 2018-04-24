#include <stdio.h>
#include <string.h>

struct Persona
{
     char nombre[50];
     int edad;
};

int main(void){
  struct Persona alumno;

  strcpy(alumno.nombre, "Nicolas Vazquez");
  alumno.edad = 28;

  puts(alumno.nombre);
  printf("%d", alumno.edad);

  return 0;
}
