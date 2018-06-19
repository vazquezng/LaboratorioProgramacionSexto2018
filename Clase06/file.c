#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *fp;

 	char caracter;

 	fp = fopen ( "fichero.txt", "a+t" ); //parametro para escritura al final y para file tipo texto

 	printf("\nIntroduce un texto al fichero: ");

 	while((caracter = getchar()) != '\n')
 	{
 		printf("%c", fputc(caracter, fp));
 	}

 	fclose ( fp );

 	return 0;
}
