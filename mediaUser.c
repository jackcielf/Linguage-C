/* Usando a estrutura condicional FOR, peça ao
   usuário 3 notas e em seguida mostre sua média */
// LEVEL: Intermediary

#include <stdio.h>

int main(){
  float x[3], media = 0;
  int z, quantN = 3;
  char y[4];

  printf("\tQual o seu nome: ");
  gets (y);
  for(z = 0;z < quantN;z++){
    printf("\tDigite a nota: ");
    scanf("%f",&x[z]);
	media=media+x[z];
  }
    media = media / quantN;
    printf("\t0lá %s, ", y);
    printf("sua media é %.2f", media);
}
