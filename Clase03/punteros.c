#include <stdio.h>

int main(void){
  int x = 5;
  int y = 10;
  int *px = &x;
  int *py = &y;
  //printf("%d\n",sizeof(char));
  //printf("%d\n",sizeof(int));
  //printf("%d\n",sizeof(float));
  //printf("%d\n", sizeof(double));
  char letra = 'a'; // 1000
  char  letra2;
  char *pletra = &letra;
  *pletra = 'n'; // Es igual que hacer letra = 'n'
  letra2 = *pletra;
  printf("%c", *pletra );

  printf("\nLa dirección de memoria de *px es: %p",px);
  printf("\nLa dirección de memoria de *py es: %p",py);

  return 1;
}
