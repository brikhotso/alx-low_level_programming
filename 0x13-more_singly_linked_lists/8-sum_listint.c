#include "lists.h"

/**
 * sum_listint - sum all elements of a list
 * @head: pointer to the first node
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
	{
		return (0);
	}
	else
	{
		while (current)
		{
			sum += current->n;
			current = current->next;
		}

		return (sum);
	}
}
