#include "lists.h"
/**
 * print_dlistint - print dlistint_t
 *@h: head
 * Return: Always nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (cnt);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
