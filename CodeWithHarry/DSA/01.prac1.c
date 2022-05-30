#include <stdio.h>
// 

int call(int n){
    int prev;
    if (n == 100)
    {
        return n;
    }
    prev = n;
    n = n+1;
    call(n);
    printf("Prev + n: %d\n", n + prev);
    printf("%d\n", n);
    return n;
}

int main()
{
    printf("MAIN: %d\n", call(1));

    return 0;
}