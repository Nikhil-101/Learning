// INCOMPLETE


#include <stdio.h>
#include <math.h>

int distance(int x1, int x2, int y1, int y2)
{
    int result = sqrt(pow(x2-x1, 2) + pow(y2-y2, 2));
    return result;
}

int area(int x1, int x2, int y1, int y2, int (*fptr) (int, int, int, int))
{
    return 0;
}




int main(int argc, char *argv[])
{
    int x1, x2, y1, y2;
    print("Enter points:\n");

    scanf("%d", &x1);
    scanf("%d", &x2);

    scanf("%d", &y1);
    scanf("%d", &y2);

    print("%d\n", area(x1, x2, y1, y2, distance));
    

    return 0;
}