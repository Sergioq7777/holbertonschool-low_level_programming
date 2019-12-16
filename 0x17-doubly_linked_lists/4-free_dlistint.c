#include "lists.h"
/**
 * free_dlistint - Free the linked list
 *@head: head
 * Return: Always nodes.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
