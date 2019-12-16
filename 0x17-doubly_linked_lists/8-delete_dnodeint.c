#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes .
 *@head: head list
 *@index: index
 *Return: 1 if succeeded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	aux = *head;
	for (count = 0; aux->next; count++)
		aux = aux->next;
	if (index > count)
		return (-1);
	else if (index == 0)
	{
		d_beg(head);
		return (1);
	}
	else if (index == count)
	{
		d_end(head);
		return (1);
	}
	d_reg(head, index);

	return (1);
}
/**
 * d_beg - deletes
 *@head: head
 */
void d_beg(dlistint_t **head)
{
	dlistint_t *aux;

	if ((*head)->next != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		aux = NULL;
	}
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
}
/**
 * d_end - deletes.
 *@head: head
 */
void d_end(dlistint_t **head)
{
	dlistint_t  *aux, *aux1;

	aux = *head;
	while (aux->next->next)
		aux = aux->next;
	aux1 = aux->next;
	aux->next = NULL;
	free(aux1);
	aux1 = NULL;
}
/**
 * d_reg - deletes.
 *@head: head.
 *@idx: index.
 */
void d_reg(dlistint_t **head, unsigned int idx)
{
	dlistint_t  *aux, *aux1;
	unsigned int count = 0;

	aux = *head;
	while (aux && count < idx - 1)
	{
		aux = aux->next;
		count++;
	}
	aux->next->next->prev = aux;
	aux1 = aux->next;
	aux->next = aux->next->next;
	free(aux1);
	aux1 = NULL;
}
