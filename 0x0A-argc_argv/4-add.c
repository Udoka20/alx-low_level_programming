#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 /**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
    int i, sum = 0;

    for (i = 1; i < argc; i++)
    {
        char *ptr = argv[i];
        while (*ptr)
        {
            if (!isdigit(*ptr))
            {
                printf("Error\n");
                return (1);
            }
            ptr++;
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}

