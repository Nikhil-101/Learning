#include <stdio.h>
// #include <stdlib.h>
#include <string.h>


int main()
{
    char str[] = "Hello How are you???";
    // printf("%s\n", str);
    // printf("%ld\n", strlen(str));
    // printf("%s\n", strstr(str, "How"));
    printf("%c\n", *(str + 2));
    

    return 0;
}