#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node index
 * @head: listint_t
 * @index: unsigned integer
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *aux;

	while (head)
	{
		aux = head;
		if (num == index)
			return (aux);
		head = head->next;
		num++;
	}
	return (NULL);
}
