#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adding node to linked listdl
 * @head: node
 * @n:value
 * Return: added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		newNode = *head;
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		return (newNode);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	newNode->prev = NULL;
	return (newNode);
}
