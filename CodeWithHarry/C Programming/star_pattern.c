#include<stdio.h>

// ---------------------------------------------

// Triangular * Pattern
int s_triangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// ---------------------------------------------

// Reverse Triangular * Pattern
int r_triangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

// Ask INPUT by the user
int getter()
{
    int num;
    printf("Eenter number: ");
    scanf("%d", &num);

    return num;
}

int main(int argc, char const *argv[])
{
    int n, num;
    while(1)
    {
        printf("0: Triangular * Pattern\n");
        printf("1: Reverse Triangular * Pattern\n");
        printf("2: Quit\n");
        printf("Enter Option: ");
        scanf("%d", &n);

        if (n == 2)
        {
            break;       // breaking the loop
        }
        
        switch (n)
        {
        case 0:
            s_triangular(getter());
            break;

        case 1:
            r_triangular(getter());
            break;
        
        default:
            printf("WARNING!!!\nPlease enter a valid opiton!!!\n");
            break;
        }
    }
    return 0;
}
