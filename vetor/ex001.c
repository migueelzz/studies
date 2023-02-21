/*
  Criar um algoritimo que solicite 10 números inteiros, armazene os números
  em um vetor e apresente: média, o maior e o menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
  int vet[10];
  int i, maior, menor, total, media;

  total = 0;
  maior = 0;
  menor = vet[0];

  printf("Digite 10 numeros inteiros:\n");
  for(i = 0; i < 10; i++) {
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

  printf("total: %d | maior: %d | menor: %d | media: %d\n", total, maior, menor, media);

  
}