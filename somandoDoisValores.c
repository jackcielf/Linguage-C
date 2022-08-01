/* Faça um programa que soma dois valores digitados
   pelo usuário */
// LEVEL: Basic

#include <stdio.h>

int soma(float x, float y) {
  float result = x + y;
  return result;
}

float n1, n2, result;
int main(){
  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  printf("Digite o segundo valor: ");
  scanf("%f", &n2);
  result = soma(n1, n2);
  printf("Resultado: %.2f", result);
}
