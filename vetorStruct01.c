#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_livro {
char nome [200];
char autor [200];
char categoria [200]; 
float preco;
};

int main(int argc, char *argv[]) {

setlocale (LC_ALL, "portuguese");

int i;
struct dados_livro livro[3];

for (i = 0; i < 3; i++){
    printf ("\n\nInforme seu nome: ");
    gets (livro[i].nome);

    printf ("\nDigite o nome do autor(a): ");
    gets (livro[i].autor);

    printf ("\nInforme a categoria do livro: ");
    gets (livro[i].categoria);

    printf ("\nInforme o preço: ");
    scanf("%f", &livro[i].preco);
fflush (stdin);
}

printf ("\n\nExibindo dados do livro: ");

for (i = 0; i < 3; i++){
    printf ("\n\nNome: %s", livro[i].nome);
    printf ("\nNome do autor(a): %s", livro[i].autor);
    printf ("\nCategoria do livro: %s", livro[i].categoria);
    printf ("\nPreço: R$%.2f", livro[i].preco);
}


    return 0;
}
