/*Escreva um algoritmo que solicita ao usuário a quantidade de alunos de
uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a
média aritmética. Obs: não deve ocorrer desperdício de memória; e após ser utilizada a
memória deve ser liberada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int quant, i;
	float *notas, soma, media;
	
	printf("Informe a quantidade de alunos:\n");
	scanf("%d", &quant);
	notas = (float*)malloc(quant * sizeof(float)*quant+1);
	for(i = 0; i < quant; i++){
		printf("Informe a nota do aluno(%d):",i + 1);
		scanf("%f",&notas[i]);
	}
	soma = 0;
	for(i = 0;i < quant; i++){
		soma = soma + notas[i];// Aqui sera somado todos os valores.
	}
	free(notas);
	media = soma/quant;// A variavel "media", recebe o somatorio das notas dividido pelo tamanho da turma.
	printf("\nA media dos alunos e:%.2f!\n", media);
	
	return 0;
}