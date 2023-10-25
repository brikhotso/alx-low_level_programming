#include "lists.h"

/**
 * free_listint_safe - frees list.
 * @h: pointer to pointer of the first item in the list
 *
 * Return: node count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *tmp;
	int loop;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		loop = *h - (*h)->next;

		if (loop > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			node_count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			node_count++;
			break;
		}
	}
	*h = NULL;

	return (node_count);
}
