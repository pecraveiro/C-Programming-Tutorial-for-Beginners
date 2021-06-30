// If Statements 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// O programa calculará qual número é maior e retornar a resposta para o usuário

int max(int num1, int num2) { // Criando a função que vai diferenciar qual número será o maior
    int result;
    if(num1 > num2 ){ // Se o número 1 é maior que o número 
        result = num1;
    }

    else { // Se não...
        result = num2;
    }

    return result;
}

int main() // Função principal
{
    setlocale(LC_ALL,"portuguese");

    printf("O maior número é: %d.", max(40, 10)); // Resolução do algoritmo e a resposta para o usuário.


    return 0;
}