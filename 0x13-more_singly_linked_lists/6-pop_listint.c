#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 * @head
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
    int n;
    listint_t *tmp;
    if (head == NULL)
        return 0;
    tmp = *head;
    if (tmp->next == NULL)
    {
        n = tmp->n;
        free(tmp);
        return (n);
    }
    n = tmp->n;
    *head = (*head)->next;
    free(tmp);
    return (n);
}