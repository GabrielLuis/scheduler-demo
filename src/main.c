#include <stdio.h>

int main() {
  int a[5];


  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
//os valores dentro de "a" são as periodicidades
//n é o numero de "repetições"
  for (int i=1; i<=n; i++) {//repetiçoes de 1 ate n
    /* Imprime resultado da n-esima iteracao do scheduler */
  //i é o numero da repetição atual
  if (i%a[0]==0) //caso o numero da repetição atual seja divisivel pela periodicidade de a[0]
  	printf("0");
  if (i%a[1]==0) //caso o numero da repetição atual seja divisivel pela periodicidade de a[1]
  	printf("1");
  if (i%a[2]==0) //caso o numero da repetição atual seja divisivel pela periodicidade de a[2]
  	printf("2");
  if (i%a[3]==0) //caso o numero da repetição atual seja divisivel pela periodicidade de a[3]
  	printf("3");
  if (i%a[4]==0) //caso o numero da repetição atual seja divisivel pela periodicidade de a[4]
  	printf("4");
  else printf("-");//caso nenhum contador tenha batido periodicidade
  printf("\n");//quebra de linha necessário ao final de cada repetição
  }
  return 0;
}
