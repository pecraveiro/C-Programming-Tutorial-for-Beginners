#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    printf("There once was a man named George");
    printf("He was 70 years old.");
    printf("He really liked the name George");
    printf("But did not like being 70.");

    */

    // Hmm... I think i wanna change the character name... - Eu decido trocar o nome do personagem

    // Definir o tipo de variável
    char characterName[] = "John"; // nomePersonagem
    int characterAge = 35; // Idade do personagem

    printf("There once was a man named %s\n", characterName); // %s - String = a collection of characters.
    printf("He was %d years old.\n", characterAge); // %d - Valor da idade do personagem
    printf("He really liked the name %s\n", characterName);
    printf("But did not like being %d.\n", characterAge); 


    // Se eu quisesse mudar novamente o nome ou a idade do personagem, basicamente o que eu precisaria fazer é mudar o valor das variáveis...
    
    /*

    char characterName[] = "Pedro"; // Variável para o nome
    int characterAge = 20; // Variável para a idade
    printf("There once was a man named %s\n", characterName); 
    printf("He was %d years old.\n", characterAge); 
    printf("He really liked the name %s\n", characterName);
    printf("But did not like being %d.\n", characterAge); 

    */

    return 0;
}

// \n - Serve para pular uma linha
// Variable is essentially a container where we can store different pieces of information / different data values / NÚMEROS, TEXTOS, LETRAS;
