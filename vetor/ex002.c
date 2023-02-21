/*
  Criar um algoritimo que leia uma quantidade de números determinada pelo usuário
  e armazene os números em um vetor e apresente depois o maior e o menor número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
  int i, tam, maior, menor, total;

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &tam);

  int vet[tam];
  float media;

  total = 0;
  maior = 0;
  menor = vet[0];

  printf("Digite %d numeros inteiros:\n", tam);
  for(i = 0; i < tam; i++) {
    scanf("%d", &vet[i]);

    total += vet[i];

    media = total / 10;

    if(maior < vet[i]) {
      maior = vet[i];
    }

    if(menor > vet[i]) {
      menor = vet[i];
    }
  }

  printf("maior: %d | menor: %d\n", maior, menor);

  
}