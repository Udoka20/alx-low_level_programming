#include "main.h"

/**
 * clear_bit - set the value of the given bit to be 0
 * @n: points to the number to change
 * @index: index of the bit to be clear
 *
 * Return: 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);

        *n = (~(1UL << index) & *n);
        return (1);
}
