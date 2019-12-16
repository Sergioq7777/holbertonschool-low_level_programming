#include "lists.h"
/**
 * *insert_dnodeint_at_index - print dlistint_t
 *@h: head
 *@idx: unsigned int
 *@n: int
 * Return: Always nodes.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int cnt = 0, length = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (length = 0; tmp->next; length++)
		tmp = tmp->next;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == length + 1)
		return (add_dnodeint_end(h, n));
	else if (idx > length + 1)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	tmp = *h;
	while (tmp && cnt < idx - 1)
	{
		tmp = tmp->next;
		cnt++;
	}
	node->n = n;
	tmp->next->prev = node;
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	return (node);
}
