/* Faça um programa que soma dois valores digitados
   pelo usuário */
// LEVEL: Basic

#include <stdio.h>
float n1, n2, result;

int soma(int x, int y) {
  result = x + y;
  return result;
}

int main(){
  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  printf("Digite o segundo valor: ");
  scanf("%f", &n2);
  result = soma(n1, n2);
  printf("Resultado: %.2f", result);
}
