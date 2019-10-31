#include "lists.h"

/**
 * list_len - Function that return the number of elements in a linked list.
 *@h: argument recived list_t.
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
