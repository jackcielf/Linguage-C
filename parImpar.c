/* Faça um programa que pede um número ao usuário e
   imprimi se é par ou ímpar */
// LEVEL: simple

#include <stdio.h>
int main(){
  int num;

  printf("ADIVINHANDO SE UM VALOR É POSITIVO OU
  NEGATIVO");
  printf("\nDigite um numero: ");
  scanf("%d",&num);
  if(num%2 == 0){
    printf("(PAR)");
  } else printf("(IMPAR)");
}

