// Functions

#include <stdio.h>
#include <stdlib.h>

int main() // Início da função principal
{

    sayHi ("Mike\n", 40); // Chama a função.
    sayHi ("Tom\n", 33); // Chama a função.
    sayHi ("Oscar\n", 21); // Chama a função.
    
    return 0;
} // Final da função principal

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d", name, age);
}

// Design a function to perform a specfic task... so the function will have a specifc purpose.
// Void - a função não vai retornar nenhuma informação
// É melhor para organizar o código