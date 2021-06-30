// Pointers - type of data
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade; 
    
    printf("Age's memory address: %p", &age); // '&age', onde está localizado no na memória do computador essa variável.

    return 0;
}


// Pointers - ''memory address'', phisical addres inside or physical address inside of the memory of our computer where we're storing a value.
// Pointer - Type of data
// Pointer - memory address.

// ''When i'm creating a pointer variable, inside of that pointer variable, I'm gonna store the memory address of a another variable inside of our program''