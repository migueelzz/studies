/*
  Criar um vetor com tamanho definido pelo usuário
  e receber os valores digitados, adicionando no vetor.

  obs: Criar uma opção de abortar a digitação dos valores
  do vetor caso o usuário digite (-1) mesmo o vetor não estando cheio.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, tam, num, qtd=0;

  printf("digite o tamanho do vetor:\n");
  scanf("%d", &tam);

  int vet[tam];
  printf("Digite %d para os vetores:\n", tam);

  for(i=0; i < tam; i++) {
    scanf("%d", &num);

    if(num == -1) {
      break;
    } else {
      vet[i] = num;
      qtd++;
    }
  }

  for(i=0; i < qtd; i++) {
    printf("Valor de vet[%d] = %d\n", i, vet[i]);
  }
}