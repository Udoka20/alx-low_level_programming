#include "main.h"

/**
 * set_bit - set a bit at any index it is given to be 1
 * @n: points to the number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);

        *n = ((1UL << index) | *n);
        return (1);
}
