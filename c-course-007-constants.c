// Constants

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5; // Aqui o valor de ''num'' é '5'
    printf("%d\n", num);
    int num1 = 9; // Decido modificar o valor de ''num'', agora ele é '9'
    printf("%d\n", num1);

    const int NUM2 = 63; // Você definiu que NUM2 é uma constante, ele não será alterado durante o código... nem pode.
    printf("%d", NUM2);

    return 0;
}

// Em C, constantes são espaços de memória reservado que contém um valor que não pode ser alterado. A forma de trabalho com uma constante e uma variável é bastante comum, ambas possuem um tipo, uma referência e um valor. O que as diferencia é a sua capacidade de permitir a alteração de valor durante o tempo de execução.