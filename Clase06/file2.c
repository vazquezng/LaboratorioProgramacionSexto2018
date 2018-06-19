#include <stdio.h>

int main ( int argc, char **argv )
{
 	FILE *fp;

 	char cadena[] = "Mostrando el uso de fputs en un fichero.\n";
  char cadena2[] = "Mostramos un string en la segunda line.\n";
 	fp = fopen ( "fichero.txt", "r+" );

 	fputs( cadena, fp );
  fputs( cadena2, fp );

 	fclose ( fp );

 	return 0;
}
