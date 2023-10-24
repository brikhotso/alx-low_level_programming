#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to pointer of first item on the list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}

	*head = previous;

	return (*head);
}
