#include "lists.h"
/**
 * dlistint_len - Count doubly link.
 *@h: head
 * Return: Always nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
