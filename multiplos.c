/* Faça um programa recebe um valor do usuário e
   imprime os números múltiplos de 3 */
// LEVEL: Basic

#include <stdio.h>
#include <stdlib.h>

int main(){
  int last, init = 0;

  do {
    printf("Digite um número menor ou igual a 100\n> ");
    scanf("%i", &last);
  } while(last > 100);

  printf("\nMúltiplos:");
  while(init <= last){
    printf("\n%d", init);
    init += 3;
  }
}

