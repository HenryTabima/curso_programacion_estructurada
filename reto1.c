#include <stdio.h>
#include <stdlib.h>

int main () {
  int x, y, z;

  printf("Ingresa el valor de x: ");
  scanf("%i", &x);

  printf("Ingresa el valor de y:");
  scanf("%i", &y);

  z = y;
  y = x;
  x = z;

  printf("El valor intercambiado del entero x es: %i\n", x);
  printf("El valor intercambiado del entero y es: %i\n", y);

  return 0;
}