#include<stdio.h>


int main()
{
    char a = 'n';
    char* ptr = &a;

    printf("%p", &a);
    printf("\n");
    // printf("%x\n", ptr);

    return 0;
}