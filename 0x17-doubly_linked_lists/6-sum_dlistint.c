#include "lists.h"
/**
 * sum_dlistint - add integers.
 *@head: head
 * Return: Always nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
