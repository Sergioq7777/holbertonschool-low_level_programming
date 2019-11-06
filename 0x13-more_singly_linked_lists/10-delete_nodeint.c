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

	listint_t *nwnode, *tmp;
	unsigned int i = 0;
	nwnode = NULL;
	tmp = NULL;
	nwnode = malloc(sizeof(listint_t));
	tmp = *head;

	if (tmp == NULL)
		return(-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return(1);
	}
	while (i < (index - 1))
	{
		if (tmp->next == NULL)
			return(-1);
		tmp = tmp->next;
		i++;
	}
	nwnode = tmp->next;
	tmp->next = nwnode->next;
	free(nwnode);
	return (1);
}
