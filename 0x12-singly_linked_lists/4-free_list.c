#include "lists.h"
/**
 * free_list - function that frees a list
 *@head: list_t
 */
void free_list(list_t *head)
{
	list_t *temporal = NULL;

	for (; head;)
	{
		temporal = head;
		head = head->next;
		free(temporal->str);
		free(temporal);
	}
}
