#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char alumnos [200][40];
int cantAlum = - 1;
char opcion;
int i = 0;
int main(){
    do{
    	printf("Ingrese una opción");
    	printf("\nA- Cargar alumno");
    	printf("\nB- Editar alumno");
    	printf("\nC- Eliminar alumno");
    	printf("\nD- Listar alumnos");
    	printf("\nE- Listar alumnos con orden alfabetico");
    	printf("\nF- Eliminar el listado");
    	printf("\nZ- Finalizar\n");

    	fflush(stdin);
      scanf("%c", &opcion);
      opcion = toupper(opcion);
      switch(opcion){
      	case 'A':
      		cantAlum ++;
      		printf("\nIngrese el nombre del alumno");
          break;
        case 'C':
      		cantAlum ++;
      		printf("\nIngrese el nombre del alumno");
          break;
      }

}while(opcion != 'Z');
    return 0;
}
