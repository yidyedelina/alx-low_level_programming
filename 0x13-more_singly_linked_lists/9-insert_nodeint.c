#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: the head of the linked list
 * @idx: the position we need to insert
 * @n: the data in node i
 * Return: the node we add
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *traverse, *newnode, *traverse2;

	traverse = *head;
	traverse2 = traverse->next;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = traverse;
		*head = newnode;
		return (newnode);
	}
	while (traverse2 != NULL)
	{
		if (i == idx)
		{
			traverse->next = newnode;
			newnode->next = traverse2;
			return (newnode);
		}
		traverse = traverse->next;
		traverse2 = traverse2->next;
		i++;
	}
	if (i == idx)
	{
		traverse->next = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
