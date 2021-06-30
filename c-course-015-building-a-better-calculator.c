// Building a Better Calculator

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    // Definição de variáveis

    double num1;
    double num2;
    char operator;
    
    // User input - informações que o usuário vai digitar para o programa
    printf("Enter a number: ");
    scanf("%lf", &num1); // Pegamos o número que o usuário vai digitar e armazenamos na variável num1.
    
    printf("Enter operator ('+','-','*'(x) or '/' (÷)): ");
    scanf(" %c", &operator);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%.2f", num1 + num2);
    }

    else if (operator == '-') {
        printf("%.2f", num1 - num2);
    }

    else if (operator == '/') {
        printf("%.2f", num1 / num2);
    }

    else if (operator == '*') {
        printf("%.2f", num1 * num2);
    }

    else {
        printf("Invalid operator!");
    }
    return 0;
}

// https://onlinegdb.com/8SIyzYyIz