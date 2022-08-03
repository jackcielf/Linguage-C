/* Faça um programa que mostre a idade do usuário e
   se é maior ou menor de idade */
// LEVEL: Simple

#include <stdio.h>

int main(){
  int data_nas, idade, ano_atual;
  char nome[50];

  printf("Qual o seu nome: ");
  scanf("%s", &nome);
  printf("Qual o ano de nascimento: ");
  scanf("%i", &data_nas);
  printf("Qual o ano atual: ");
  scanf("%i", &ano_atual);
  idade = ano_atual - data_nas;
  printf("Olá %s, você tem %i anos de idade, então", 
  nome, idade);
  if(idade >= 18){
    printf(" é de maior!");
  } else {
  	printf (" é de menor!");
  }
 }
