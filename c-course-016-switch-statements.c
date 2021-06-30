// Switch Statements
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char grade = 'C';

    switch (grade)
    {
        case 'A' : // no caso de A ser a nota(grade) 
            printf("You did great!");
        break;

        case 'B' : // no caso de B ser a nota(grade)
            printf("You did alright!");
        break;

        case 'C' : // no caso da nota ser C
            printf("You did ok.");
        break;

        case 'D' : // no caso da nota ser D
            printf("You very bad.");
        break;

        case 'F' : // no caso da nota ser F
            printf("You failed!");
        break;

        default : // Se o usuário informou uma nota que não existe
            printf("Invalid Grade");
    }
    
    
    return 0;
}