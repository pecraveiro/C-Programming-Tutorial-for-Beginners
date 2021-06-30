// Writing Files
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    /* FILE * fpointer = fopen("employees.txt", "w"); // "a" "r" "w"
    
    // Adicionando informações

    fprintf(fpointer, "Jim, Salesman.\nCarlos, Receptionist.\nOscar Account Manager."); // Write information to a file

    fclose(fpointer);

    */

    FILE * fpointer = fopen("employees.txt", "a");

    // Adicionando informações

    fprintf(fpointer, "\nKelly, Custumer Service"); // Write information to a file

    fclose(fpointer);

    return 0;
}

// Pointer - memory address

// Create a file and store some information inside of that file.

// r = Read
// w = Write
// a = append significa 'acrescentar'