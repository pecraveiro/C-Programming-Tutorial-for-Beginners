// If Statements 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// O programa calculará qual número é maior e retornar a resposta para o usuário

int max(int num1, int num2, int num3) { // Criando a função que vai diferenciar qual número será o maior
    int result;
   
    if (num1 >= num2 && num1 >= num3) // ''Basically what this ''&&'' does is it allows us to put two conditions so we can check two things.
        {   
            result = num1; 
        }

    else if (num2 >= num1 && num2 >= num3)
        {   
            result = num2; 
        }

    else 
        {
            result = num3;
        }
    
    return result;
}

int main() // Função principal
{
    setlocale(LC_ALL,"portuguese");

    printf("O maior número é: %d.", max(22, 100, 30)); // Resolução do algoritmo e a resposta para o usuário.


    return 0;
}


// Aprendi como utilizar os &&.