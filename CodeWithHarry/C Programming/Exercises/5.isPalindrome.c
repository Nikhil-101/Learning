#include <stdio.h>

int revNumber(int n)
{
    int rnum = 0, tmp = n;
    while (tmp != 0)
    {
        rnum = rnum * 10 + tmp % 10;
        tmp /= 10;
    }
    // printf("%d", rnum);
    return rnum;
    ;
}

int isPalindrome(int n)
{
    if (revNumber(n) == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}