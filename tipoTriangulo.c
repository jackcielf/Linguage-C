/* Fazer um programa para receber valores inreturn
   X, Y e Z do usuário e determinar se estes valores
   podem formar os lados de um triângulo. Em caso
   afirmativo, informar se o triângulo
   é equilátero, isósceles ou escaleno. */
// LEVEL: Basic

#include <stdio.h>
int main() {

  float l1, l2, base;
  printf("Qual o tamanho do lado: ");
  scanf("%f", &l1);
  printf("Qual o tamanho do outro lado: ");
  scanf("%f", &l2);
  printf("Qual o tamanho da base: ");
  scanf("%f", &base);

  if(l1 == l2 && base != l1) {
    printf("\nTRIÂNGULO ISÓSCELES");
  }
  else if(l1 == l2 && l2 == base) {
    printf("\nTRIÂNGULO EQUILÁTERO");
  }
  else if(l1 != l2 && l2 != base && base != l1) {
    printf("\nTRIÂNGULO ESCALENO");
  }
  return 0;
}
