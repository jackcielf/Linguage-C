/* Faça um programa que recebe um valor do usuário e mostra sua tabuada, use o laço FOR */
// LEVEL: Basic

#include <stdio.h>
#define TAM 10

int main(){
  int num, cont, soma;

  printf("\t--- TABUADA ---\n\n");
  printf("Digite o número da tabuada: ");
  scanf("%i", &num);

  for(cont = 0; cont <= TAM; cont++) {
    soma = num * cont;
    printf("%i x %i = %i\n", num, cont, soma);
  }
}
