#include <stdio.h>


void parser(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '<')
        {
            i++;
            continue;
        }
        
        // printf("%c", str[1]);
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}


int main()
{
    char str[] = "<p> This is an HTML Parser </p>";
    parser(str);

    return 0;
}