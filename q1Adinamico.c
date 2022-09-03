#include <stdio.h>
#include <stdlib.h>

int main(){
  int *vet, i,tam;
  
  printf("Digite o tamanho do vetor: "); // aqui sera definido o tamanho do vetor pelo usuario.
  scanf("%d",&tam);
  vet = (int*)malloc(tam * sizeof(int));// criação do vetor, e armazenando o tamanho de inteiros no espaço alocado/

  if(vet == NULL){
    printf("Memoria insuficiente.\n");
    exit(1);
  }

   int soma = 0;
   for(i = 0 ; i < tam; i++){
       printf("Informe um valor na posicao[%d]: ", i+1);
       scanf("%d", &vet[i]);// aqui sera realizado a leitura de dado, para realizacão  da comparação com maior e menor.
     soma = soma + vet[i];
   }
   int maior = vet[0];
   int menor = vet[0];

   for(i = 0 ; i < tam; i++){
       if(vet[i] > maior){
         maior = vet[i];
       }
       if(vet[i] < menor){
         menor = vet[i];
       }
    }
    printf("\n\n");
    printf("O menor valor inserido foi: %d\n", menor);
    printf("O maior valor inserido foi: %d\n", maior);
    printf("O somatorio total foi: %d\n", soma);

    free(vet); //desalocando o espaço utilizado anteriormente/

   return 0;
}