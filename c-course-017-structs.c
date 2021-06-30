// Structs 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa; // ''grade point average'' - Used by high schools, colleges, and graduate schools alike, a grade point average (GPA) is a single cumulative number that represents your entire academic performance.
};



int main()
{
    setlocale(LC_ALL,"portuguese");

    struct Student student1;
    student1.age = 20;
    student1.gpa = 3.2;
    strcpy( student1.name, "Pedro");
    strcpy( student1.major, "Computer Engineer");

    //printf("%s", student1.name);

    struct Student student2;
    student2.age = 19;
    student2.gpa = 2.8;
    strcpy(student2.name, "Maitê");
    strcpy(student2.major, "Medicine");

    //printf("%d", student2.age);

    struct Student student3;
    student3.age = 20;
    student3.gpa = 3.2;
    strcpy( student3.name, "Tiago");
    strcpy( student3.major, "Civil Engineer");

    //printf("%i", student3.gpa);

    return 0;
}


// The term 'major' when used in the context of education refers to a university or college student's main field of specialization during his studies.