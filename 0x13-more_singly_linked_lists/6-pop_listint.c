#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked alist.
 *@head: type listint_t
 *
 *Return: int
 */

int pop_listint(listint_t **head)
{

	int n;
	listint_t *tmp;

	if (*head != NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
