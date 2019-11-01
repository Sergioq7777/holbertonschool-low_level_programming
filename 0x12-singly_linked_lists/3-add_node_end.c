#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 *@head: list_t
 *@str: char
 *Return: Always
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t size;
	list_t *end, *temporal;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	if (*head == NULL)
		*head = end;
	else
	{
		temporal = *head;
		while (temporal->next)
		{
			temporal = temporal->next;
		}
		temporal->next = end;
	}

	end->str = strdup(str);

	for (size = 0; str[size] != '\0'; size++)
		;

	end->next = NULL;
	end->len = size;
	return (*head);
}
