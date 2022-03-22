#include <stdio.h>


int main()
{
    printf("fgetc, fputc, fgets, fputs\n");
    FILE *ptr = fopen("IO Files/IO_advanced.txt", "a+");
    char c;
    char s[35];
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }

    fgets(s, 5, ptr);
    printf("%s\n", s);

    char a[] = "My name is Nikhil";
    fputs(a, ptr);
    // printf("%c\n", fgetc(ptr));

    return 0;
}