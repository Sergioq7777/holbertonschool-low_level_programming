#include "lists.h"

/**
 * free_listint2 - function that frees a alist.
 *@head: type listint_t
 *
 * No Return
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

}
