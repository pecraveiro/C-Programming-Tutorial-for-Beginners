#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("%f", 8.9); // %f - representa um número flutuante - ''%f stands for like a floating-point number''
    printf("%2.f", 8.9); // %2.f - Vai mostrar apenas 2 casas decimais após a vírgula
    printf("%f", 5.0 + 4.5); // Adição
    printf("%f", 5.0 - 4.5); // Subtração
    printf("%f", 5.0 / 4.5); // Divisão
    printf("%f", 5.0 * 4.5); // Multiplicação

    int num = 6.0;
    printf("%f", num);

    /* Math Functions
    Função - Descrição do comando
    floor( ) arredonda para baixo
    ceil( )	arredonda para cima
    sqrt( )	Calcula raiz quadrada
    pow(variável, expoente)	potenciação
    sin( )	seno
    cos( )	cosseno
    tan( )	Tangente
    log( )	logaritmo natural
    log10( ) logaritmo base 10
*/

    printf("%d", pow(2,3)); // pow -Dois elevado ao cubo 2^3 = 8
    printf("%d", sqrt(36)); //sqrt - Raiz quadrada de 36 = + ou - 4
    printf("%f", ceil(36.872345)); // ceil - Arredonda para cima
    printf("%f", floor(36.872345)); // floor - Arredonda para baixo
    return 0;
}