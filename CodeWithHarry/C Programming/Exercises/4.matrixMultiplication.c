#include <stdio.h>


void display_Matrix(int m[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", m[i][j]);
            // printf("\t");
        }
        printf("\n");
    }
    // printf("\n");
}


void multiplication_Matrix(int m[2][2], int n[2][2])
{
    int r[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                r[i][j] += (m[i][k] * n[k][j]);
            }
            // printf("%d\t", r[i][j]); 
        }
        // printf("\n");
    }
    display_Matrix(r);
    
}

int main()
{
    printf("Matrix Multipliacation!!!\n\n");
    int a[2][2] = {{1, 1}, {2, 2}};
    int b[2][2] = {{1, 1}, {2, 2}};

    // Print matrix
    printf("1st Matrix: \n");
    display_Matrix(a);
    printf("2nd Matrix: \n");
    display_Matrix(b);

    printf("Multiplication: \n");
    multiplication_Matrix(a, b);
    
    

    return 0;
}