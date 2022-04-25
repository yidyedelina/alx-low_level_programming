#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the linked list element
 * @h: the head of linked list
 * Return: the number of nodes
 */
size_t print_list(const listint_t *h)
{
    size_t i = 0, len;
    const listint_t *traverse = h;

    while (traverse != NULL)
    {
        printf("%d", traverse->n);
        i++;
        traverse = traverse->next;
    }
    return (i);
}
