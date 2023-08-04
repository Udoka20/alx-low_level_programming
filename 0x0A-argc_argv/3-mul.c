#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int main(int argc, char **argv)
{
    int a, b, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    result = a * b;
    printf("%d\n", result);

    return (0);
}
