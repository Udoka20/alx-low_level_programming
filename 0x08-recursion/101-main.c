#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2);

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.d");
    printf("%d\n", r);
    r = wildcmp("main.c", "");
    printf("%d\n", r);

    return (0);
}
