#include "lists.h"

/**
 * delete_nodeint_at_index - delete node  at any given positionn of a list
 * @head: pointer to first node
 * @index: position of node to delete
 *
 * Return: 1 on sucess and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *new_node, *current, *previous;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
		return (1);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
