#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_pessoa {
char nome [200];
int dataNasc;
int RG; 
int CPF;
};

int main(){
	
setlocale (LC_ALL, "portuguese");

int i;
struct dados_pessoa dados[2];


for (i = 0; i < 2; i++){
	printf ("\nInforme seu nome: ");
	gets (dados[i].nome);
	
	printf("\nInforme sua data de nascimento: ");
	scanf ("%d", &dados[i].dataNasc);
	
	printf ("\nInforme seu RG: ");
	scanf ("%d", &dados[i].RG);
	
	printf ("\nInforme seu CPF (sem traço e pontos): " );
	scanf ("%d", &dados[i].CPF);
	
	fflush (stdin);	
}

printf ("\n\nExibindo dados pessoais: ");

for (i = 0; i < 2; i++){
	printf ("\nNome: %s", dados[i].nome);
	printf("\nData de nascimento: %d", dados[i].dataNasc);
	printf ("\nRG: %d", dados[i].RG);
	printf ("\nCPf: %d", dados[i].CPF);
}


	return 0;
}
