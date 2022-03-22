#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gen_random(int n)
{
    srand(time(NULL));
    return rand() % (n - 1 + 1) + 1;
}

int main()
{
    char name[25];
    int pturn, cturn;
    int pPoints = 0, cPoints = 0;

    printf("WELOCOME to Rock, Paper & Scissors Game!!!\n\n");
    printf("Enter name of player: ");
    scanf("%s", name);

    printf("Following options are available: \n");
    printf("1: Rock\n2: Paper\n3: Scissors\n");

    for (int i = 0; i < 3; i++)
    {
        printf("INPUT: ");
        scanf("%d", &pturn);
        cturn = gen_random(3);
        printf("Computer Turn: %d\n", cturn);
        if (pturn == cturn)
        {
            printf("Its Draw\n");
        }
        else if (pturn == 1 && cturn == 2)
        {
            printf("Computer WINS!!!\n");
            cPoints++;
            
        }
        else if (pturn == 2 && cturn == 1)
        {
            printf("Player WINS!!!\n");
            pPoints++;
        }
        else if (pturn == 2 && cturn == 3)
        {
            printf("Computer WINS!!!\n");
            cPoints++;
        }
        else if (pturn == 3 && cturn == 2)
        {
            printf("Player WINS!!!\n");
            pPoints++;
        }
        else if (pturn == 1 && cturn == 3)
        {
            printf("Player WINS!!!\n");
            pPoints++;
        }
        else if (pturn == 3 && cturn == 1)
        {
            printf("Computer WINS!!!\n");
            cPoints++;
        }
    }

    printf("\nPlayer Points: %d\nComputer Points: %d\n", pPoints, cPoints);

    if (pPoints >> cPoints)
        printf("%s Won the Game!!!\n", name);
    else
        printf("Computer Won the Game!!!\n");


    return 0;
}