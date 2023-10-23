#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at any given position
 * @idx: position of the new node
 * @n: data
 * @head: ponter to first iteam of the list
 *
 * Return: address to new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *previous;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < idx && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}

	previous->next = new_node;
	new_node->next = current;

	return (new_node);
}
