#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: linked list of type listint_t to be print
 *
 * Return: number of nodes on success
 */
size_t print_listint(const listint_t *h)
{
        size_t num = 0;

        while (h)
        {
                printf("%d\n", h->n);
                num++;
                h = h->next;
        }

        return (num);
}
