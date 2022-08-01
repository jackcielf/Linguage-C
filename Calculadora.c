/* Faça um programa que pergunte qual tipo de cálculo
   será efetuado (Soma, Subtração, Multiplicação ou
   Divisão), mostre o resultado do cálculo e ao clicar
   em um certo número, ele saia do programa
*/

#include <stdio.h>
main(){
  int op, loop = 0;
  float n1, n2, result;
 
  while(loop == 0){
    printf("\n\t1 - SOMA\n\t2 - SUBTRAÇÃO\n\t3 -
 MULTIPLICAÇÃO\n\t4 - DIVISÃO\n\t5 - SAIR\n\t> ");
    scanf("%d",&op);
    switch(op){
      case 1:
	printf("\n\tDigite o primeiro numero: ");
        scanf("%f",&n1);
	printf("\n\tDigite o segundo numero: ");
	scanf("%f",&n2);
        result = n1 + n2;
	printf("\n\tRESULTADO: %.2f", result);
	break;

      case 2:
	printf("\n\tDigite o primeiro numero: ");
	scanf("%f",&n1);
	printf("\n\tDigite o segundo numero: ");
	scanf("%f",&n2);
        result = n1 - n2;
	printf("\n\tRESULTADO: %.2f", result);
        break;

      case 3:
	printf("\n\tDigite o primeiro numero: ");
	scanf("%f",&n1);
	printf("\n\tDigite o segundo numero: ");
	scanf("%f",&n2);
	result = n1 * n2;
	printf("\n\tRESULTADO: %.2f", result);
	break;

      case 4:
	printf("\n\tDigite o primeiro numero: ");
	scanf("%f",&n1);
	printf("\n\tDigite o segundo numero: ");
	scanf("%f",&n2);
        result = n1 / n2;
	printf("\n\tRESULTADO: %.2f", result);
	break;

      case 5:
	printf("\n\tAté mais...");
	loop = 1;
	break;

      default:
	printf("\n\t(Por favor, Digite uma opção
 válida!)\n");
	break;
    }
  }
}
