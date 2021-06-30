// Dereferencing Pointers
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int age = 30;
    int * pAge = &age;

    printf("%p\n", pAge);
    
    printf("%d\n", *pAge); 

    printf("%d\n", *&age); 
    
    
    return 0;
}