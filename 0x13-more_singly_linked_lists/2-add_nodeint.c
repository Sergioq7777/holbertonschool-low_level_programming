#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of alist.
 *@head: type listint_t
 *@n: int on the structure
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
