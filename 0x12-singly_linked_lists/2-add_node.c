#include "lists.h"
/**
 * add_node - list the nodes of a list strcutre
 *@head: first structure in the list
 *@str: string to add to new structure
 *Return: new structure with str on it
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t size;
	list_t *ptradd;


	ptradd = malloc(sizeof(list_t));

	if (!ptradd)
		return (NULL);

	ptradd->str = strdup(str);

	for (size = 0; str[size] != '\0'; size++)
		;

	ptradd->len = size;
	ptradd->next = *head;
	*head = ptradd;
	return (*head);
}
