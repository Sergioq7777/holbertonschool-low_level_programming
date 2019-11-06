#include "lists.h"
/**
 * *insert_nodeint_at_index - function that returns the sum of all the date n.
 *@head: listint_t
 *@idx: unsigned int.
 *@n: int.
 * Return: sum
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *nwnodo, *tmp;
	unsigned int i = 0;
	nwnodo = NULL;
	tmp = NULL;
	nwnodo = malloc(sizeof(listint_t));
	tmp = *head;

	if (nwnode == NULL)
		return(NULL);

	nwnode->n = n;

	if (idx == 0)
	{
		nwnode->next = *head;
		*head = nwnode;
	}
	else
	{
		tmp = *head;
		while (i < (idx - 1))
		{
			cp = cp->next;
			i++;
			if (cp == NULL)
			{

			}

		}
	}
}
