// Building a Guessing Game - Simples
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int secretNumber = 5;
    int guess;

    while( guess != secretNumber) {
        printf("Enter a number: ");
        scanf("%d", &guess);
        printf("Failed to guess! Try again!\n");
    }

    printf("You win!\n");
    printf("O número secreto era: %d", secretNumber);
    
    return 0;
}