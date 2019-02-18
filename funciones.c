#include <stdio.h>
#include <stdlib.h>

int main () {
  int a, b;
  
  printf("Ingrese el primer numero: ");
  scanf("%i", &a);

  printf("Ingrese el segundo numero: ");
  scanf("%i", &b);

  int resultadoSuma = suma(a, b);

  printf("El resultado de la suma es: %i\n", resultadoSuma);
  return 0;
}

int suma (int a, int b) {
  int suma = a + b;
  return suma;
}