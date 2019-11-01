#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 *@head: list_lT
 *@str: char
 *Return: Always
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
