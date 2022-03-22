#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[25];
    int driving_license;
    char route[35];
    int distance;
} emp;


int main()
{
    int n;
    printf("Enter number of Employees data to store: ");
    scanf("%d", &n);
    emp emp_list[n];
    // INPUT the data
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        // fgets(emp_list[i].name, 25, stdin);
        scanf("%s", emp_list[i].name);              
        // Here `&` is absent as emp_list.name already points to an address
        printf("Enter Driving License Number: ");
        scanf("%d", &emp_list[i].driving_license);
        printf("Enter Route Details: ");
        scanf("%s", emp_list[i].route);
        // fgets(emp_list[i].route, 35, stdin);
        printf("Enter Distance of Route: ");
        scanf("%d", &emp_list[i].distance);
    }
    // OUTPUT the data
    printf("\nOUTPUT: \n");
    for (int i = 0; i < n; i++)
    {
        printf("The name of number %d employee is: ", i + 1);
        puts(emp_list[i].name);
        printf("The Driving License number is: %d", emp_list[i].driving_license);
        printf("\nThe Route of employee is: ");
        puts(emp_list[i].route);
        printf("Distance to Travel: %d\n", emp_list[i].distance);
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }

    return 0;
}