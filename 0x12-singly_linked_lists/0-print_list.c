#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 *@h: argument recived list_t.
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int it = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		it++;
	}
	return (it);
}
