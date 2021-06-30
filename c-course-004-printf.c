#include <stdio.h>
#include <stdlib.h>

int main()
{   // Format specifier %, com uma letra específica
    printf("\nMy favorite number is %d", 500); // Função printf - Printf = ''prints something out onto the screen.'' / imprime algo na tela;
    
    printf("\nMy favorite %s is %d", "number", 500);
    printf("\nMy favorite %s is %f", "number", 500.5213);

    int FavNum = 90;

    printf("\nMy favorite %s is %d", "number", FavNum);

    // %s - string, %d - decimal number, %f - float number...

    return 0;
}