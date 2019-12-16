#include "lists.h"
/**
 * *add_dnodeint - add node to..
 *@head: head
 *@n: number
 * Return: Always nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = *head;
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		ptr->prev = NULL;
		(*head)->prev = ptr;
		*head = ptr;
	}
	return (*head);
}
