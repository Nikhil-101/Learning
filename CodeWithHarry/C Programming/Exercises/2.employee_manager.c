#include <stdio.h>
#include <stdlib.h>


// Use of 1. Dynamic Memory (malloc)

int main()
{
    int n, length;
    printf("Enter number of entries to enter: ");
    scanf("%d", &n);
    char **is_array = malloc(n * sizeof(char *));                       // Declaration: Array of String in C
    for (int i = 0; i < n; i++)
    {
        printf("Enter the length of %d ID: ", (i + 1));
        scanf("%d", &length);

        char *emp_id = (char *) malloc((length + 1) * sizeof(char));
        printf("Enter ID: ");
        scanf("%s", emp_id);

        is_array[i] = emp_id;
    }

    for (int i = 0; i < n; i++)
        printf("ID of %d: %s\n", (i + 1), is_array[i]);

    free(is_array);
    return 0;
}