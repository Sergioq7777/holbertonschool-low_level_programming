#include "lists.h"
/**
 * print_dlistint - print dlistint_t
 *@h: head
 * Return: Always nodes.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int cnt = 0;

	while (head && cnt < index)
	{
		head = head->next;
		cnt++;
	}
	tmp = head;
	return (tmp);

}
