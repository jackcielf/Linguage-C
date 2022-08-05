/* Write a program that asks for three numbers and shows the highest value between them */
// LEVEL: Basic

#include <stdio.h>

int main(){
  int n1, n2, n3;

  // Receiving value
  printf("Write first value: ");
  scanf("%d", &n1);
  printf("Write second value: ");
  scanf("%d", &n2);
  printf("Write third value: ");
  scanf("%d", &n3);

  // Checking higher value
  if(n1 > n2 && n1 > n3){
      printf("Higher: %d", n1);
  }
  else if(n2 > n1 && n2 > n3){
      printf("Higher: %d", n2);
  }
  else if(n3 > n1 && n3 > n2){
      printf("Higher: %d", n3);
  }
  else if(n1 >= n2 && n2 >= n3){
      printf("(They're all equal!)" , n1, n2, n3);
  }
}
