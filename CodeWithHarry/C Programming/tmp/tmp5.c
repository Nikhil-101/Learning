#include <stdio.h>

#define R1 3
#define C1 3
#define R2 3
#define C2 3


void printMatrix(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int multiplyMatrix(int m[R1][C1], int n[R2][C2])
{
    int r[R1][C2];
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < R2; k++)
            {
                r[i][j] += m[i][k] * n[k][j];
            }
        }
    }
    printMatrix(r);
}


int main()
{
    int a[R1][C1] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    int b[R2][C2] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    printf("Matxix 1: \n");
    printMatrix(a);
    printf("Matrix 2: \n");
    printMatrix(b);
    
    printf("After Multiplication: \n");
    multiplyMatrix(a, b);

    return 0;
}