#include <stdio.h>


int main()
{
    char name[35], item[30], outlet[] = "UNA FASHION CENTER", receiptContents[200], c;

    FILE *ptr = NULL;

    printf("Welcome to Automate Receipt Generator!!!\n");
    // printf("Enter name: ");
    // scanf("%s", name);
    // printf("Enter item purchased: ");
    // scanf("%s", item);

    ptr = fopen("../IO Files/receipt.txt", "r");
    // while (fscanf(ptr, "%[^\n] ", receiptContents) != EOF) {
    //     printf("> %s\n", receiptContents);
    // }

    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");
    

    // fscanf(ptr, "%s", receiptContents);
    // printf("%s\n", receiptContents);

    return 0;
}