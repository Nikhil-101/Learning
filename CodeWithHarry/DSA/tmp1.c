#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *c = "a+b-c";
    printf("Size: %ld\n", sizeof(c));
    printf("Size: %ld\n", strlen(c));
    return 0;
}