#include <stdio.h>
#include <stdlib.h>

typedef struct myArray
{
    int totalSize, usedSize, *address;
}myArray;

void createArray(int tSize, int uSize, myArray *ptr)
{
    (*ptr).totalSize = tSize;           // Both styles are correct but 2nd one is preffered
    ptr->usedSize = uSize;
    ptr->address = (int *) malloc(tSize * sizeof(int));
}

void setVal(myArray *ptr)
{
    for (int i = 0; i < ptr->usedSize; i++)
    {
        int n;
        printf("Enter i value: ");
        scanf("%d", &n);
        (ptr->address)[i] = n;
    }
}

void getVal(myArray * ptr)
{
    for (int i = 0; i < ptr->usedSize; i++)
    {
        printf("Value at i: ");
        printf("%d\n", (ptr->address[i]));
    }
    
}

int main()
{
    myArray marks;
    createArray(10, 4, &marks);
    setVal(&marks);
    getVal(&marks);


    return 0;
}