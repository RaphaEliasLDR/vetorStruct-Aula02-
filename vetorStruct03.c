#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_aluno{
char nome [200];
int idade;
float notas [3];
float media;
};

int main(){
	
setlocale (LC_ALL, "portuguese");
int i, j;
float somaNota;

struct dados_aluno dados[3];

for (i = 0; i < 3; i++){
	printf ("\nInforme seu nome: ");
	gets (dados[i].nome);
	
	printf ("\nInforme sua idade: ");
	scanf ("%d", &dados[i].idade);
	
	for (j = 0; j < 2; j++){	
		printf ("\nInforme a %dº nota do aluno: ", j+1);
		scanf ("%f", &dados[i].notas[j]);
		somaNota += dados[i].notas[j];
	}
	
	dados[i].media = somaNota / j;
	somaNota = 0;
	
	fflush(stdin);
}


for (i = 0; i < 3; i++){
	printf ("\nNome: %s", dados[i].nome);
	printf ("\nIdade: %d", dados[i].idade);
		
		for (j = 0; j < 2; j++){
		printf ("\n%dº nota: %.2f", j+1, dados[i].notas[j]);
	}
	printf ("\nMédia: %.2f", dados[i].media);
}




return 0;
}



