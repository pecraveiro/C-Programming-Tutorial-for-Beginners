// Arrays - Vetores


#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    // Esse programa serve se eu já tiver os números do meu vetor
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; // int - Definição do Array, luckyNumbers[] - Vetor, {} - Números dentro do vetor.
    luckyNumbers[1]= 200; // Agora ao invés de '8' será mostrado o número '200'.
    printf("%d", luckyNumbers[1]);
    */

    // Esse programa serve para caso eu ainda não tenha os números do vetor
    int luckyNumbers[10]; // Está decidido que ele terá 10 elementos

    luckyNumbers[1] = 93;
    luckyNumbers[0] = 44;

    printf("%d", luckyNumbers[1]);
    printf("%d", luckyNumbers[0]);

    // char phrase[20] = "Array"; // ''Array of characteres''

    return 0;
}

// Começa contando nessa sequência: 0, 1, 2, 3, 4... sempre começa com '0'!