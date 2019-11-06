#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked alist.
 *@head: type listint_t
 *
 *Return: int
 */

int pop_listint(listint_t **head)
{

	int n = 0;
	listint_t *tmp;

	if (*head != NULL)
		return (0);

	n = (*head)->next;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
