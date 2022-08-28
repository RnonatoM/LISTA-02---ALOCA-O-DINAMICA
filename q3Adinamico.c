/*Implemente uma fun��o que preencha um vetor alocado dinamicamente de N
elementos com valores inteiros fornecidos pelo o usu�rio, de modo que, � medida que um
novo elemento � inserido, o vetor j� permane�a organizado de maneira ordenada
crescente. Escreva um programa que utiliza esta fun��o, que deve obedecer ao seguinte
prot�tipo: void preenche_ordenado(int n, int *v); */

#include <stdio.h>
#include <stdlib.h>

void preenche_ordenado(int n, int *v){
	int i;
	printf("ELEMENTOS LIDOS:");
	for(i = 0;i < n; i++){
		printf("%d", v[i]);
		printf("\n");
	}
}
int main(void){
	int *v;
	int n, i, numeros;
	printf("Quantidade de elementos:  ");
	scanf("%d", &n);
	v = malloc(n* sizeof(int));// Armazenando o vetor de N elementos de valores inteiros.
	if(v == NULL){
		printf("erro na alocacao dinamica");
		exit(1);
	}
	for(i = 0;i < n; i++){
		printf("vetor %d:", i);
		scanf("%d", &numeros);
	}
	printf("v%d = %d", *v, n);
	free(v);
	return 0;
}
