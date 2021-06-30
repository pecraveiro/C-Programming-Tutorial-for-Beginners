// Reading Files
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char line[255];

    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // Se tem 1, pega  a primeira linha do código
    fgets(line, 255, fpointer); // Se tem 2, pega a segunda linha... e assim vai, se tivesse 4 iria pegar a 4 linha...
    printf("%s", line);

    fclose(fpointer);

    return 0;
}

// Lê as linhas 'individualmente'