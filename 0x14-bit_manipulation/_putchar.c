#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * -1 is returned On error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
