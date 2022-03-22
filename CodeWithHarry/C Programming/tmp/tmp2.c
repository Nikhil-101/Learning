#include <stdio.h>

void findsize(int arr[])
{
    printf("%ld\n", sizeof(arr));
}


int main()
{
    // Enter Code Here!!!
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    int arr[5] = {1, 2, 3, 4, 5};
    // printf("%ld\n", sizeof(arr)/4);
    // printf("%ld\n", sizeof(int));
    findsize(arr);

    return 0;
}
