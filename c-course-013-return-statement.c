// Return Statement

#include <stdio.h>
#include <stdlib.h>

double cube(double num){ // Criando a função
    double result = num * num * num; // Cubo
    return result;
} 

int main() // Função principal
{
    printf("Answer: %.2f", cube(5.0)); // Chamando a função
    return 0;
}


// %.2f para entregar o resultado com dois números após a vírgula/ponto