#include <stdio.h>

int main(){
  int vec[10];
  int i = 0;
  for(; i<10; i++){
    vec[i] = i*10;
  }

  for(i=0; i<10; i++){
    printf("\n%d\n",vec[i]);
  }

  return 1;
}
