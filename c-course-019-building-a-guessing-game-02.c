// Building a Guessing Game - Mais completo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int secretNumber = 5; // O número que o usuário precisa adivinhar
    int guess; // Variável que será armazenada pelo input do usuário
    int guessCounter = 0; // Contador que se inicia no 0
    int guessLimit = 3; // Você tem um limite de chances, no caso 3
    int outOfGuesses = 0; // Variável que indica que as chances acabaram

    while( guess != secretNumber && outOfGuesses == 0)  // Aqui temos 2 condições
    {   
        if (guessCounter < guessLimit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCounter++;
        }
        else 
        {
            outOfGuesses = 1;
        }
    }
    
    if(outOfGuesses == 1)
    {
        printf("Out of guesses! Rerun the code and try again!");
    }

    else 
    {
    printf("You win!\n");
    printf("O número secreto era: %d.", secretNumber);
    }
    
    return 0;
}