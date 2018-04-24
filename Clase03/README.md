#Punteros

## Definición
Un puntero es un dato que contiene una dirección de memoria.
NOTA: Existe una dirección especial que se representa por medio de la
constante NULL (definida en <stdlib.h>) y se emplea cuando
queremos indicar que un puntero no apunta a ninguna dirección.
Declaración

<tipo> *<identificador>

<tipo>
Tipo de dato del objeto referenciado por el puntero

<identificador>
Identificador de la variable de tipo puntero.

Cuando se declara un puntero se reserva memoria para albergar una dirección de
memoria, pero NO PARA ALMACENAR EL DATO AL QUE APUNTA EL PUNTERO.
El espacio de memoria reservado para almacenar un puntero es el mismo
independientemente del tipo de dato al que apunte: el espacio que ocupa una
dirección de memoria.


Escriba un programa en C, que realice la ordenación de un vector de una dimensión usando el método de “Ordenación de
selección”. Una ordenación de selección recorre un arreglo buscando el elemento más pequeño del mismo. Cuando encuentra el más pequeño,
es intercambiado con el primer elemento del arreglo. El proceso a continuación se repite para el subarreglo que empieza con el segundo
elemento del arreglo. Cada pasada del arreglo resulta en un elemento colocado en su posición correcta. Esta ordenación requiere de capacidades
de procesamiento similares a la ordenación de tipo burbuja para un arreglo de n elementos, deberán de hacerse n-1 pasada, y para cada
subarreglo, se harán n-1 comparaciones para encontrar el valor más pequeño. Cuando el subarreglo bajo procesa contenga un solo elemento, el
arreglo habrá quedado terminado y ordenado.




http://elvex.ugr.es/decsai/c/apuntes/punteros.pdf
http://www.it.uc3m.es/abel/as/DSP/M2/Pointers_es.html
