// Building a Basic Calculator

#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    // Esse programa funciona para números interios
    // Declaração de variáveis
    int num1; // Número 1;
    int num2; // Número 2;
    printf("Enter first number: "); // Pede para o usuário digitar o primeiro número;
    scanf("%d", &num1); // & - precisamos utilizar para armazenar o valor da variável;
    printf("Enter second number: "); // Pede para o usuário digitar o segundo número;
    scanf("%d", &num2);


    printf("A soma dos dois números é: %d", num1 + num2);
    */


    // Esse programa funciona para números racionais
    // Declaração de variáveis
    double num1; // Número 1;
    double num2; // Número 2;
    printf("Enter first number: "); // Pede para o usuário digitar o primeiro número;
    scanf("%lf", &num1); // & - precisamos utilizar para armazenar o valor da variável;
    printf("Enter second number: "); // Pede para o usuário digitar o segundo número;
    scanf("%lf", &num2);


    printf("A soma dos dois números é: %f", num1 + num2);

    return 0;
}


// & - acessando o local onde o num foi armazenado

// Regras:
// Para printf usamos %f
// Para scanf usamos %lf