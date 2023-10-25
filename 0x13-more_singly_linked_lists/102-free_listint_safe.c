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
	listint_t *current = *h;
	listint_t *next, *slow = *h, *fast = current;
	int loop;

	if (h == NULL || *h == NULL)
		return (0);

	while (current != NULL)
	{
		next = current->next;

		loop = 0;
		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				loop = 1;
				break;
			}
		}
		if (loop && current == slow)
			break;

		free(current);
		current = next;

		if (current == NULL || loop)
			break;

		node_count++;
	}
	*h = NULL;
	return (node_count);
}
