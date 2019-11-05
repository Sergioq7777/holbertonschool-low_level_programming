#include "lists.h"

/**
 * free_listint - function that frees a alist.
 *@head: type listint_t
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	if (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
