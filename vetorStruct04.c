#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_pessoais{
char nome [200];
char matricula [200];
char dataAd[200];
char endereco [200];
char dataNasc[200];
};


int main(){
setlocale (LC_ALL, "portuguese");
int i, j;

struct dados_pessoais funcionario[3];
struct dados_pessoais cliente[3];

printf ("\nRecebendo informa��es do funcionario... ");

for (i = 0; i < 3; i++){
	printf ("\n\nInforme seu nome: ");
	gets (funcionario[i].nome);
	
	printf ("\nInforme sua data de admiss�o: ");
	gets (funcionario[i].dataAd);
	
	printf ("\nInforme sua matr�cula: ");
	gets (funcionario[i].matricula);
	
	fflush (stdin);
}

system ("cls");

printf ("\nRecebendo informa��es do cliente... ");

for (j = 0; j < 3; j++){
	printf ("\n\nInforme seu nome: ");
	gets (cliente[j].nome);
	
	printf ("\nInforme sua data de Nascimento: ");
	gets (cliente[j].dataNasc);
	
	printf ("\nInforme seu endere�o: ");
	gets (cliente[j].endereco);	
	
	fflush (stdin);
}

printf ("\n\nExibindo dados do funcionario... "); 

for (i = 0; i < 3; i++){
	printf ("\n\nNome: %s", funcionario[i].nome);
	printf ("\nData de admiss�o: %s", funcionario[i].dataAd);
	printf ("\nMatr�cula: %s", funcionario[i].matricula);
}

printf ("\n\nExibindo dados do cliente... ");

for (j = 0; j < 3; j++){
	printf ("\n\nNome: %s", cliente[j].nome);
	printf ("\nData de admiss�o: %s", cliente[j].dataNasc);
	printf ("\nMatr�cula: %s", cliente[j].endereco);
}






return 0;
}
