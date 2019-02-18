#include <stdio.h>
#include <stdlib.h>

int main () {
  // int integerA = 1;
  // float floatA = 1.1;
  // double doubleA = 1.2;
  // char letterA = 'A';

  // En la siguiente linea estamos imprimiendo mi variable integerA
  // printf("El valor de neustro entero A es: %i \n", integerA);
  // printf("El valor de mi flotante A es: %f \n", floatA);
  // printf("El valor de mi double A es: %f \n", doubleA);
  // printf("El valor de mi caracter A es: %c \n", letterA);

  int integerA;
  float floatA;
  char letterA;

  printf("Ingresa el valor del entero A: ");
  scanf("%i", &integerA);

  printf("El entero a es: %i \n", integerA);

  return 0;
}