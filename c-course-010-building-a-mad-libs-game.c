// Building a Mad Libs Game

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // O programa funciona para uma falar de uma celebridade com nome e sobrenome. 
    // Declaração de variáveis
    char color[20];
    char pluralNoun[20];
    char celebrityF[20]; // First name
    char celebrityL[20]; // Last name

    // Entrada de dados do usuário
    printf("Enter a color: "); // Digita a cor
    scanf("%s", &color); // A função scanf: armazena na variável a cor;

    printf("Enter a plural noun:");
    scanf("%s", &pluralNoun);

    printf("Enter a celebrity: "); // Se o usuário digitar Pedro Henrique, a função scanf só pega e armazena o Pedro, nao armazena nada depois do espaço;
    scanf("%s%s", &celebrityF, &celebrityL);

    printf("Roses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s %s.\n", celebrityF, &celebrityL);


    return 0;
}


// Plural noun - ''substantivo no plural''
