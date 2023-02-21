/*
  Faça um programa utilizando funções que leia 10 números do usuário
  e faça o teste de número par ou ímpar dos números digitados.
  Crie dois vetores e armazene os números pares no pirmeirovetor e os
  números ímpares no segundo vetor. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int verificar(int n1) {
  
  if(n1 % 2 == 0){
    return 0;
  }
  return 1;
}

int main() {
  int i, tamImpar, tamPar, vetDigitado[10], vetImpar[10], vetPar[10];

  tamPar = 0;
  tamImpar = 0;

  printf("Digite 10 numeros inteiros\n\n");
  for(i = 0; i < 10; i++) {
    printf("Digite o %d numero: ", i+1);
    scanf("%d%*c", &vetDigitado[i]);

    if(verificar(vetDigitado[i]) == 0) {
      vetPar[tamPar] = vetDigitado[i];
      tamPar++;
    } else {
      vetImpar[tamImpar] = vetDigitado[i];
      tamImpar++;
    }
  }

  for(i = 0; i < tamPar; i++) {
    printf("Vetor Par: %d \n", vetPar[i]);
  }

    for(i = 0; i < tamImpar; i++) {
    printf("Vetor Impar: %d \n", vetImpar[i]);
  }
  
}