#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Welcome to calculator app!!!\n");
    printf("Argv at 1 is: %s\n", argv[1]);
    printf("Integer 1 is: %d\n", atoi(argv[2]));
    printf("Integer 2 is: %d\n", atoi(argv[3]));
    
    if (strcmp(argv[1], "add") == 0)
    {
        printf("SUM: %d\n", atoi(argv[2]) + atoi(argv[3]));
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        printf("Subtract: %d\n", atoi(argv[2]) - atoi(argv[3]));
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("Multiply: %d\n", atoi(argv[2]) * atoi(argv[3]));
    }
    else if (strcmp(argv[1], "division") == 0)
    {
        printf("Division: %d\n", atoi(argv[2]) / atoi(argv[3]));
    }
    else
    {
        printf("INVALID Operation!!!\n");
    }
    

    return 0;
}