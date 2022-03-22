#include <stdio.h>

int main()
{
    FILE *ptr = fopen("IO Files/abc.txt", "a");
    char *s = "Hello World!!!\n";
    char r[50];
    fprintf(ptr, "%s", s);
    fclose(ptr);

    FILE *rptr = fopen("IO Files/abc.txt", "r");
    // fscanf(rptr, "%s", r);
    while (fscanf(rptr, "%[^\n] ", r) != EOF) {
        printf("> %s\n", r);
    }
    // printf("%s", s);
    return 0;
}
