#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: pointer to the first item of the list
 * @index: index of node starting from 0
 *
 * Return: nth node,NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	for (count = 0; count < index ; count++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}

	return (current);
}
