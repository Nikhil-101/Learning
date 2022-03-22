#include <stdio.h>
#include <string.h>

void parser(char str[])
{
    int i = 0, mode = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '<')
        {
            mode = 1;           // ignore mode ON
            i++;
            continue;
        }
        else if (str[i] == '>')
        {
            mode = 0;           // ignore mode OFF
            i++;
            if (str[i] == ' ')  // check after tag blank space
            {
                i++;
            }
            continue;
        }
        else if (mode == 0)
        {
            printf("%c", str[i]);
            // i++;
        }
        i++;
    }
    
    // while (str[0] == ' ')
    // {
    //     for (int i = 0; i < strlen(str); i++)
    //     {
    //         str[i] = str[i + 1];
    //     }
    // }
    

    
    printf("\n");
}

int main()
{
    char str[] = "<html>      This is an HTML Parser </html>";
    parser(str);

    return 0;
}