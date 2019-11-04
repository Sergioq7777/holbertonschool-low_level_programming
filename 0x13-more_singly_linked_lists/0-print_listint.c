#include "lists.h"

/**
 * print_listint - Function thath prints all the elemnes of a list.
 *
 *@h: int on the structure
 *
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{

	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (h->n)
			printf("%d\n", h->n);

		h = h->next;
	}
	return (i);
}
