#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a new word
char *replaceWords(const char *str, const char *oldWord, const char *newWord)
{
    char *resultStr;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            printf("Count: %d\n", count);
            i = i + oldWordLength - 1;
        }
    }
    // i now is the length of str
    resultStr = (char *) malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultStr[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultStr[i] = *str;
            i++;
            str += 1;
        }
    }
    resultStr[i] = '\0';
    return resultStr;
}


int main()
{
    char name[35], item[30], outlet[] = "UNA FASHION CENTER", receiptContents[200], c;
    char *newReceipt;

    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    printf("Welcome to Automate Receipt Generator!!!\n");
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter item purchased: ");
    scanf("%s", item);

    ptr = fopen("../IO Files/receipt.txt", "r");
    ptr2 = fopen("../IO Files/genReceipt.txt", "w");
    // while (fscanf(ptr, "%[^\n] ", receiptContents) != EOF) {
    //     printf("> %s\n", receiptContents);
    // }
    fgets(receiptContents, 200, ptr);
    printf("The receipt contents are: \n%s\n", receiptContents);

    newReceipt = replaceWords(receiptContents, "{{name}}", name);
    newReceipt = replaceWords(newReceipt, "{{item}}", item);
    newReceipt = replaceWords(newReceipt, "{{outlet}}", outlet);
    fputs(newReceipt, ptr2);
    printf("The new receipt contents are: \n%s\n", newReceipt);

    fclose(ptr);
    fclose(ptr2);
    // while ((c = fgetc(ptr)) != EOF)
    // {
    //     printf("%c", c);
    // }
    // printf("\n");
    

    // fscanf(ptr, "%s", receiptContents);
    // printf("%s\n", receiptContents);

    return 0;
}