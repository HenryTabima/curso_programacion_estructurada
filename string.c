#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()  {
  int size;
  
  printf("Cadena de caracteres\n");

  char nameC[50];

  printf("Ingresar el Nombre con gets: \n");
  gets(nameC);

  printf("El nombre es: \n");
  puts(nameC);

  size = strlen(nameC);

  printf("El tamaño de la cadena es: %i\n", size);

  return 0;
}