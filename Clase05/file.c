#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CNAME 20
#define CANTALUMNOS 50

struct Alumnos {
	char nombre[CNAME];
};

void imprimirStruct();
void imprimirCaracter();

FILE *archivo;

int totalCaracteres = 0;
int main()
{
	archivo = fopen("prueba.txt","r");

	if (archivo == NULL){
      printf("\nError de apertura del archivo. \n\n");
  }else{
      printf("\nEl contenido del archivo de prueba es \n\n");
			imprimirStruct();
			printf("\nEl contenido del archivo de prueba es \n\n");
			//fseek(archivo, sizeof(caracter) * totalCaracteres, SEEK_SET);

			//imprimirCaracter();
	}

  fclose(archivo);

	return 0;
}

void imprimirCaracter(){
	char caracter;
	while((caracter = fgetc(archivo)) != EOF){
		printf("%c",caracter);
		totalCaracteres ++;
	}
}

void imprimirStruct(){
	char caracter;
	int iLetras=0, iAlumno = 0, tmpIAlumnos = 0;
	struct Alumnos alumnos[CANTALUMNOS];
	strcpy(alumnos[0].nombre, "");
	while((caracter = fgetc(archivo)) != EOF){
		if(caracter != '\n'){
			alumnos[iAlumno].nombre[iLetras] =  caracter;
			iLetras++;
		}else {
			iAlumno ++;
			iLetras = 0;
			strcpy(alumnos[iAlumno].nombre, "");
		}
	}

	for(;tmpIAlumnos<iAlumno;tmpIAlumnos++){
		printf("%s\n", alumnos[tmpIAlumnos].nombre );
	}
}
