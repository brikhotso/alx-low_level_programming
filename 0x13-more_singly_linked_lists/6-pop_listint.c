#include "lists.h"

/**
 * pop_listint - delete head node of a list
 * @head: pointer to first node
 *
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int r = 0;

	listint_t *next_node = NULL;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	r = (*head)->n;
	free(*head);
	*head = next_node;

	return (r);
}
