#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a list.
 *
 *@h: int on the structure
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{

	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
