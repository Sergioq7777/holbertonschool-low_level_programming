#include "lists.h"
/**
 * *add_dnodeint_end - add node to the end.
 *@head: head
 *@n: number
 * Return: Always nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *node, *tmp;

	tmp = *head;
	node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		node->n = n;
		node->next = NULL;
		node->prev = *head;
		*head = node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		node->n = n;
		node->next = NULL;
		node->prev = tmp;
		tmp->next = node;
	}
	return (*head);
}
