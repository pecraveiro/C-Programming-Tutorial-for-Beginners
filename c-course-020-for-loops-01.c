// For loops - 1 Exemplo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i;
    for(i = 1; i <= 5; i++) // Várias condições dentro do FOR - valor da variável, quando a variável for maior ou igual a 5, o computador incrementa +1 na variável 'i'.
    {
        printf("%d\n",i);
    }
    
    return 0;
}