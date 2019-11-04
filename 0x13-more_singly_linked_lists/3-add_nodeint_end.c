#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of alist.
 *@head: type listint_t
 *@n: int on the structure
 *
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *tmp;

	end_node = malloc(sizeof(listint_t));

	if (!end_node)
		return (NULL);

	if (*head == NULL)
		*head = end_node;

	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = end_node;
	}
	end_node->n = n;
	end_node->next = NULL;
	return (*head);
}
