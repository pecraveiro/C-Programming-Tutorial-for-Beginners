// Getting User Input - ''Obtendo entrada do usuário''

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age; // Precisamos declarar uma variável para que o programa possa armazená-la mais pra frente...
    printf("Enter your age: "); // Diga-me sua idade. / Digite sua idade
    scanf("%d", &age); // Obtendo a entrada do usuário e armazenando
    printf("Sua idade é: %d.", &age); // Mostra pro usuário a idade que ele havia digitado
    printf("You are %d years old.", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is: ", &gpa);

    char grade; // Character
    printf("Enter your grade: "); // A, B, C, D, F. - notas nos EUA
    scanf("%c", grade);
    printf("Your gpa is %c", grade);

    char name[30]; // Serve para especificar o tanto de espaço que eu vou deixar para o usuário digitar
    printf("Enter your name: ");
    // scanf("%s", name); // Por que não usar essa função para nomes? Por que por ex: Pedro Henrique, no programa, ele só vai armazenar o nome 'Pedro'
    fgets(name, 30, stdin); // ''Is essentially just gonna grab like a whole line of text'', ou seja, vai armazenar tudo o que nós queremos... nome e sobrenome. 
    printf("Your name is %s", name);

    return 0;
}

// & é um ponteiro/pointer - quando utilizamos o scanf, para armazenar isso na memória, precisamos utilizar o &.

// Qual a diferença entre %lf e %f;
/* 
For scanf, %f reads into a float, and %lf reads into a double.

For printf: In C99 and later, they both are identical, and they print either a float or a double. In C89, %lf caused undefined behaviour although it was a common extension to treat it as %f.

The reason that one specifier can be used for two different types in printf is because of the default argument promotions; arguments of type float are promoted to double when used to call a function and not matching a parameter in a function prototype. So printf just sees a double in either case. */