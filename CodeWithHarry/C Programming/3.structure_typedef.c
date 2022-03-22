#include <stdio.h>
#include <string.h>

typedef struct Student      // union is also similar to struct execpt in memory management
{
    char name[15];
    int id;
    int marks;
} std;                      // giving alias name from struct Student -> std using typedef
                            // typedef <previous_name> <alias_name>

int main()
{
    struct Student s1;
    std s2;                 // using with help of typedef at line 9
    s1.id = 67;
    // s1.name = "Nikhil";
    strcpy(s1.name, "Nikhil");
    s1.marks = 77;
    printf("%s %d %d\n", s1.name, s1.id, s1.marks);

    return 0;
}