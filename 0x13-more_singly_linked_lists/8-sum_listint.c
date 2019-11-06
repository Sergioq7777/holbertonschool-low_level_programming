#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node index
 * @head: listint_t
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
