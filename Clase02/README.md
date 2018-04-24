# Estructuras.

Una estructura es un conjunto de variables que se referencian bajo el mismo
nombre. La sintaxis de la declaración de una estructura en lenguaje C es:
struct nombre_estructura{
 tipo nombre_variable;
 tipo nombre_variable;
 ...
 tipo nombre_variable;
}variables_estructura;

Es posible no poner el nombre de la estructura (nombre_estructura), o bien, no
crear en el momento de declarar la estructura ninguna variable de la estructura
(variables_estructura), pero no es posible eliminar la aparición de ambos elementos.
Veamos algunos ejemplos de declaración de estructuras:

Para referenciar un elemento de una estructura se realiza de la siguiente forma:
variables_estructura.nombre_variable;
