// Memory Addresses - Acessar o endereço de memória
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\n", &age); // Pointers - %p
    printf("Gpa: %p\n", &gpa); // Pointers - %p
    printf("Grade: %p\n", &grade); // Pointers - %p

    return 0;
}

// Variáveis -  ''All of this information is stored in our physical memory somewhere, and so whenever C needs to access that information whenever our computer needs to access this value, no caso, 30, or this value 3.4, or 'A'. It's actually going to refer ot a specific memory address.
// Continuação - So when I want to access this variable age, I can just type out age and then I can use this variable. But when C wants to refer to this value, it's not actually using 'age', it's gonna use the memory address where this value is stored inside of our physical memory.
// Continuação - So all of these values are stored inside of a physical address in our memory. So all of theses values have an address where they're stored in memory and when C needs to access them it can use that address.

// Nos printfs - Serão os ''this is the physical memory address where the value of '30' (no caso) is stored in other words.
// Precisamos identificar as variaveis com '&'